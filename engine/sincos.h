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

int sintbl[]=
{
  0,
  1143,
  2287,
  3429,
  4571,
  5711,
  6850,
  7986,
  9120,
  10251,
  11380,
  12504,
  13625,
  14742,
  15854,
  16961,
  18063,
  19160,
  20251,
  21336,
  22414,
  23485,
  24549,
  25606,
  26655,
  27696,
  28728,
  29752,
  30766,
  31771,
  32767,
  33752,
  34728,
  35692,
  36646,
  37589,
  38520,
  39439,
  40347,
  41242,
  42125,
  42994,
  43851,
  44694,
  45524,
  46340,
  47141,
  47929,
  48701,
  49459,
  50202,
  50930,
  51642,
  52338,
  53018,
  53683,
  54330,
  54962,
  55576,
  56174,
  56754,
  57318,
  57863,
  58392,
  58902,
  59394,
  59869,
  60325,
  60762,
  61182,
  61582,
  61964,
  62327,
  62671,
  62996,
  63301,
  63588,
  63855,
  64102,
  64330,
  64539,
  64728,
  64897,
  65046,
  65175,
  65285,
  65375,
  65445,
  65495,
  65525,
  65534,
  65525,
  65495,
  65445,
  65375,
  65285,
  65176,
  65046,
  64897,
  64728,
  64539,
  64330,
  64102,
  63855,
  63588,
  63301,
  62996,
  62671,
  62327,
  61964,
  61582,
  61182,
  60763,
  60325,
  59869,
  59394,
  58902,
  58392,
  57864,
  57318,
  56755,
  56174,
  55576,
  54962,
  54331,
  53683,
  53019,
  52338,
  51642,
  50930,
  50202,
  49459,
  48702,
  47929,
  47142,
  46340,
  45524,
  44694,
  43851,
  42994,
  42125,
  41242,
  40347,
  39440,
  38520,
  37589,
  36646,
  35693,
  34728,
  33753,
  32767,
  31772,
  30766,
  29752,
  28728,
  27696,
  26655,
  25606,
  24549,
  23485,
  22414,
  21336,
  20251,
  19160,
  18064,
  16961,
  15854,
  14742,
  13625,
  12504,
  11380,
  10252,
  9120,
  7986,
  6850,
  5711,
  4571,
  3430,
  2287,
  1143,
  0,
  -1143,
  -2286,
  -3429,
  -4571,
  -5711,
  -6850,
  -7986,
  -9120,
  -10251,
  -11379,
  -12504,
  -13625,
  -14741,
  -15854,
  -16961,
  -18063,
  -19160,
  -20251,
  -21335,
  -22414,
  -23485,
  -24549,
  -25606,
  -26655,
  -27696,
  -28728,
  -29752,
  -30766,
  -31771,
  -32767,
  -33752,
  -34728,
  -35692,
  -36646,
  -37589,
  -38520,
  -39439,
  -40347,
  -41242,
  -42124,
  -42994,
  -43851,
  -44694,
  -45524,
  -46340,
  -47141,
  -47929,
  -48701,
  -49459,
  -50202,
  -50930,
  -51642,
  -52338,
  -53018,
  -53682,
  -54330,
  -54962,
  -55576,
  -56174,
  -56754,
  -57318,
  -57863,
  -58392,
  -58902,
  -59394,
  -59869,
  -60325,
  -60762,
  -61182,
  -61582,
  -61964,
  -62327,
  -62671,
  -62996,
  -63301,
  -63588,
  -63855,
  -64102,
  -64330,
  -64539,
  -64728,
  -64897,
  -65046,
  -65175,
  -65285,
  -65375,
  -65445,
  -65495,
  -65525,
  -65534,
  -65525,
  -65495,
  -65445,
  -65375,
  -65285,
  -65176,
  -65046,
  -64897,
  -64728,
  -64539,
  -64330,
  -64102,
  -63855,
  -63588,
  -63302,
  -62996,
  -62671,
  -62327,
  -61964,
  -61582,
  -61182,
  -60763,
  -60325,
  -59869,
  -59395,
  -58902,
  -58392,
  -57864,
  -57318,
  -56755,
  -56174,
  -55576,
  -54962,
  -54331,
  -53683,
  -53019,
  -52338,
  -51642,
  -50930,
  -50202,
  -49460,
  -48702,
  -47929,
  -47142,
  -46340,
  -45524,
  -44694,
  -43851,
  -42995,
  -42125,
  -41242,
  -40347,
  -39440,
  -38520,
  -37589,
  -36646,
  -35693,
  -34728,
  -33753,
  -32767,
  -31772,
  -30767,
  -29752,
  -28728,
  -27696,
  -26655,
  -25606,
  -24550,
  -23485,
  -22414,
  -21336,
  -20251,
  -19160,
  -18064,
  -16962,
  -15854,
  -14742,
  -13625,
  -12504,
  -11380,
  -10252,
  -9121,
  -7987,
  -6850,
  -5712,
  -4571,
  -3430,
  -2287,
  -1144,
};

int costbl[]={
  65535,
  65525,
  65495,
  65445,
  65375,
  65285,
  65175,
  65046,
  64897,
  64728,
  64539,
  64330,
  64102,
  63855,
  63588,
  63301,
  62996,
  62671,
  62327,
  61964,
  61582,
  61182,
  60763,
  60325,
  59869,
  59394,
  58902,
  58392,
  57863,
  57318,
  56754,
  56174,
  55576,
  54962,
  54330,
  53683,
  53018,
  52338,
  51642,
  50930,
  50202,
  49459,
  48702,
  47929,
  47141,
  46340,
  45524,
  44694,
  43851,
  42994,
  42125,
  41242,
  40347,
  39439,
  38520,
  37589,
  36646,
  35692,
  34728,
  33753,
  32767,
  31772,
  30766,
  29752,
  28728,
  27696,
  26655,
  25606,
  24549,
  23485,
  22414,
  21336,
  20251,
  19160,
  18063,
  16961,
  15854,
  14742,
  13625,
  12504,
  11380,
  10252,
  9120,
  7986,
  6850,
  5711,
  4571,
  3429,
  2287,
  1143,
  0,
  -1143,
  -2287,
  -3429,
  -4571,
  -5711,
  -6850,
  -7986,
  -9120,
  -10251,
  -11379,
  -12504,
  -13625,
  -14742,
  -15854,
  -16961,
  -18063,
  -19160,
  -20251,
  -21336,
  -22414,
  -23485,
  -24549,
  -25606,
  -26655,
  -27696,
  -28728,
  -29752,
  -30766,
  -31771,
  -32767,
  -33752,
  -34728,
  -35692,
  -36646,
  -37589,
  -38520,
  -39439,
  -40347,
  -41242,
  -42124,
  -42994,
  -43851,
  -44694,
  -45524,
  -46340,
  -47141,
  -47929,
  -48701,
  -49459,
  -50202,
  -50930,
  -51642,
  -52338,
  -53018,
  -53683,
  -54330,
  -54962,
  -55576,
  -56174,
  -56754,
  -57318,
  -57863,
  -58392,
  -58902,
  -59394,
  -59869,
  -60325,
  -60762,
  -61182,
  -61582,
  -61964,
  -62327,
  -62671,
  -62996,
  -63301,
  -63588,
  -63855,
  -64102,
  -64330,
  -64539,
  -64728,
  -64897,
  -65046,
  -65175,
  -65285,
  -65375,
  -65445,
  -65495,
  -65525,
  -65534,
  -65525,
  -65495,
  -65445,
  -65375,
  -65285,
  -65176,
  -65046,
  -64897,
  -64728,
  -64539,
  -64330,
  -64102,
  -63855,
  -63588,
  -63301,
  -62996,
  -62671,
  -62327,
  -61964,
  -61582,
  -61182,
  -60763,
  -60325,
  -59869,
  -59394,
  -58902,
  -58392,
  -57864,
  -57318,
  -56755,
  -56174,
  -55576,
  -54962,
  -54331,
  -53683,
  -53019,
  -52338,
  -51642,
  -50930,
  -50202,
  -49460,
  -48702,
  -47929,
  -47142,
  -46340,
  -45524,
  -44694,
  -43851,
  -42994,
  -42125,
  -41242,
  -40347,
  -39440,
  -38520,
  -37589,
  -36646,
  -35693,
  -34728,
  -33753,
  -32767,
  -31772,
  -30767,
  -29752,
  -28728,
  -27696,
  -26655,
  -25606,
  -24550,
  -23485,
  -22414,
  -21336,
  -20251,
  -19160,
  -18064,
  -16961,
  -15854,
  -14742,
  -13625,
  -12504,
  -11380,
  -10252,
  -9120,
  -7986,
  -6850,
  -5712,
  -4571,
  -3430,
  -2287,
  -1144,
  0,
  1143,
  2286,
  3429,
  4571,
  5711,
  6850,
  7986,
  9120,
  10251,
  11379,
  12504,
  13625,
  14741,
  15854,
  16961,
  18063,
  19160,
  20251,
  21335,
  22414,
  23485,
  24549,
  25606,
  26655,
  27696,
  28728,
  29752,
  30766,
  31771,
  32767,
  33752,
  34728,
  35692,
  36646,
  37589,
  38520,
  39439,
  40347,
  41242,
  42124,
  42994,
  43851,
  44694,
  45524,
  46340,
  47141,
  47929,
  48701,
  49459,
  50202,
  50930,
  51642,
  52338,
  53018,
  53682,
  54330,
  54962,
  55576,
  56174,
  56754,
  57318,
  57863,
  58391,
  58902,
  59394,
  59869,
  60325,
  60762,
  61182,
  61582,
  61964,
  62327,
  62671,
  62996,
  63301,
  63588,
  63855,
  64102,
  64330,
  64539,
  64728,
  64897,
  65046,
  65175,
  65285,
  65375,
  65445,
  65495,
  65525,
};

int tantbl[]=
{
  0,
  1143,
  2288,
  3434,
  4582,
  5733,
  6888,
  8046,
  9210,
  10379,
  11555,
  12738,
  13929,
  15129,
  16339,
  17560,
  18791,
  20036,
  21293,
  22565,
  23852,
  25156,
  26477,
  27817,
  29178,
  30559,
  31963,
  33391,
  34845,
  36326,
  37836,
  39377,
  40950,
  42558,
  44203,
  45888,
  47613,
  49384,
  51201,
  53069,
  54990,
  56968,
  59007,
  61112,
  63286,
  65534,
  67863,
  70277,
  72783,
  75389,
  78101,
  80928,
  83880,
  86967,
  90201,
  93593,
  97159,
  100914,
  104877,
  109068,
  113509,
  118228,
  123253,
  128619,
  134366,
  140539,
  147193,
  154390,
  162204,
  170723,
  180055,
  190326,
  201695,
  214354,
  228546,
  244578,
  262845,
  283861,
  308316,
  337146,
  371664,
  413768,
  466301,
  533734,
  623516,
  749057,
  937177,
  1250451,
  1876607,
  3754215,
  -2147483647, //8,
  -3754786,
  -1876749,
  -1250515,
  -937212,
  -749080,
  -623532,
  -533746,
  -466310,
  -413775,
  -371670,
  -337151,
  -308320,
  -283865,
  -262848,
  -244581,
  -228549,
  -214356,
  -201697,
  -190328,
  -180056,
  -170725,
  -162205,
  -154391,
  -147194,
  -140540,
  -134367,
  -128620,
  -123253,
  -118228,
  -113510,
  -109068,
  -104878,
  -100915,
  -97160,
  -93594,
  -90201,
  -86968,
  -83881,
  -80929,
  -78101,
  -75389,
  -72784,
  -70277,
  -67863,
  -65535,
  -63286,
  -61112,
  -59008,
  -56968,
  -54990,
  -53069,
  -51201,
  -49384,
  -47614,
  -45888,
  -44204,
  -42559,
  -40951,
  -39377,
  -37836,
  -36326,
  -34845,
  -33391,
  -31963,
  -30559,
  -29178,
  -27818,
  -26478,
  -25156,
  -23852,
  -22565,
  -21293,
  -20036,
  -18792,
  -17560,
  -16339,
  -15130,
  -13930,
  -12738,
  -11555,
  -10379,
  -9210,
  -8046,
  -6888,
  -5733,
  -4582,
  -3434,
  -2288,
  -1144,
  0,
  1143,
  2288,
  3434,
  4582,
  5733,
  6887,
  8046,
  9210,
  10379,
  11555,
  12738,
  13929,
  15129,
  16339,
  17559,
  18791,
  20035,
  21293,
  22565,
  23852,
  25156,
  26477,
  27817,
  29177,
  30559,
  31963,
  33391,
  34845,
  36326,
  37836,
  39377,
  40950,
  42558,
  44203,
  45887,
  47613,
  49383,
  51201,
  53068,
  54990,
  56968,
  59007,
  61111,
  63285,
  65534,
  67863,
  70277,
  72783,
  75388,
  78101,
  80928,
  83880,
  86967,
  90200,
  93592,
  97158,
  100914,
  104877,
  109067,
  113509,
  118227,
  123252,
  128618,
  134365,
  140538,
  147192,
  154389,
  162203,
  170722,
  180053,
  190325,
  201693,
  214352,
  228544,
  244576,
  262842,
  283858,
  308312,
  337141,
  371659,
  413761,
  466292,
  533722,
  623500,
  749034,
  937141,
  1250388,
  1876464,
  3753644,
  -2147483647, //8,
  -3755357,
  -1876892,
  -1250578,
  -937248,
  -749103,
  -623548,
  -533757,
  -466319,
  -413782,
  -371676,
  -337155,
  -308324,
  -283868,
  -262851,
  -244584,
  -228551,
  -214358,
  -201698,
  -190330,
  -180058,
  -170726,
  -162206,
  -154392,
  -147195,
  -140541,
  -134368,
  -128621,
  -123254,
  -118229,
  -113511,
  -109069,
  -104878,
  -100916,
  -97160,
  -93594,
  -90202,
  -86968,
  -83881,
  -80929,
  -78102,
  -75390,
  -72784,
  -70278,
  -67864,
  -65535,
  -63287,
  -61112,
  -59008,
  -56969,
  -54990,
  -53069,
  -51202,
  -49384,
  -47614,
  -45888,
  -44204,
  -42559,
  -40951,
  -39377,
  -37837,
  -36327,
  -34845,
  -33392,
  -31963,
  -30559,
  -29178,
  -27818,
  -26478,
  -25156,
  -23853,
  -22565,
  -21293,
  -20036,
  -18792,
  -17560,
  -16340,
  -15130,
  -13930,
  -12739,
  -11555,
  -10380,
  -9210,
  -8047,
  -6888,
  -5733,
  -4582,
  -3434,
  -2288,
  -1144,
};
