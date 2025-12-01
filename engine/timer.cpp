/*
Copyright (C) 1998 BJ Eirich (aka vecna)
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

// ���������������������������������������������������������������������Ŀ
// �                          The VERGE Engine                           �
// �              Copyright (C)1998 BJ Eirich (aka vecna)                �
// �                    Timer / PIC contoller module                     �
// �����������������������������������������������������������������������

// ChangeLog
// <tSB>  Nov 4, '00 - rewritten to work in Win32.  Borrows heavily from vecna's
// winv1.

#include "timer.h"
#include "verge.h"

#include <emscripten.h>
#include <emscripten/html5.h>

namespace {
long globalTimer = 0;
}

// ================================= Data ====================================

unsigned int systemtime = 0, timer_count = 0, hktimer = 0, vctimer = 0;

// ================================= Code ====================================

void incTimerCount() {
    ++systemtime;
    ++timer_count;
    ++hktimer;
    ++vctimer;

    if (cpu_watch) {
        CPUTick();
    }

    CheckTileAnimation();
}

EM_JS(int, wasm_timerUpdate, (), {
    console.log("wasm_timerUpdate");

    if (typeof(window.vergeTimerLast) === 'undefined') {
        return;
    }

    const time = performance.now();
    window.vergeTimerAccumulator += Math.max(time - window.vergeTimerLast, 0);
    window.vergeTimerLast = time;

    const frameDelta = Math.floor(window.vergeTimerAccumulator / window.VERGE_TIMER_FRAME_STEP);
    window.vergeTimerAccumulator -= frameDelta * window.VERGE_TIMER_FRAME_STEP;

    return frameDelta;
});

void timerUpdate() {
    const auto frameDelta = wasm_timerUpdate();

    for (int i = 0; i < frameDelta; i++) {
        incTimerCount();
    }
}

void timerInterval(void*) {
    timerUpdate();
}

EM_JS(void, wasm_initTimer, (), {
    window.VERGE_TIMER_FRAME_STEP = 10;
    window.vergeTimerLast = performance.now();
    window.vergeTimerAccumulator = 0;
});

void InitTimer() {
    wasm_initTimer();
    globalTimer = emscripten_set_interval(&timerInterval, 10, nullptr);
}

void ShutdownTimer() {
    emscripten_clear_interval(globalTimer);
    globalTimer = 0;
}
