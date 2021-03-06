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

#ifndef SOUND_H
#define SOUND_H

extern int sfx_volume;
extern int sfx_numchans;
extern int sfx_mixrate;
extern int sfx_bufflen;
extern int sfx_safemode;

void InitMusicSystem();
void ShutdownMusicSystem();
void PlayMusic(const char*);
int GetMusicVolume();
void SetMusicVolume(int vol);
void StopMusic();
int CacheSound(const char*);
void FreeAllSounds();
void PlaySFX(int, int, int);

void SoundPause();
void SoundResume();

#endif
