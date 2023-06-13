/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#define NOTOSANS 123
#if HAS_GRAPHICAL_TFT && TFT_FONT == NOTOSANS

#include <stdint.h>

// NotoSans Medium ASCII 26pt, capital 'A' heigth: 19px, width: 100%, range: 0x0020-0x007e
extern const uint8_t NotoSans_Medium_ASCII_19[6379] = {
  130,19,32,0,126,0,25,249, // unifont_t
  // 0x0020 " "
  0,0,0,7,0,0,
  // 0x0021  !
  4,20,20,7,2,255,168,252,252,252,252,252,252,188,188,184,184,184,120,20,0,16,252,253,252,16,
  // 0x0022  "
  8,8,16,11,2,11,164,40,244,125,244,60,240,60,240,60,240,60,240,60,0,0,
  // 0x0023  #
  16,19,76,17,0,0,0,6,64,160,0,15,65,240,0,15,2,224,0,15,2,208,0,30,3,192,0,46,3,192,31,255,255,255,31,255,255,255,0,60,11,64,0,120,15,0,0,184,15,0,21,249,111,84,127,255,255,253,42,250,191,168,1,240,60,0,2,224,60,0,2,208,124,0,3,192,120,0,3,192,180,0,
  // 0x0024  $
  13,22,88,15,1,254,0,24,0,0,0,29,0,0,0,110,80,0,11,255,254,0,63,255,254,0,126,29,4,0,188,29,0,0,125,29,0,0,63,109,0,0,47,254,0,0,7,255,224,0,0,111,253,0,0,30,191,0,0,29,31,64,0,29,15,128,80,29,47,64,190,175,255,0,127,255,248,0,6,190,64,0,0,29,0,0,0,29,0,0,0,8,0,0,
  // 0x0025  %
  20,20,100,22,1,255,7,224,0,10,0,47,252,0,47,0,125,62,0,60,0,184,31,0,184,0,248,15,0,240,0,244,15,3,224,0,244,15,7,192,0,248,15,15,65,64,184,31,31,31,244,61,62,61,126,188,47,252,188,184,62,7,224,240,244,31,0,2,224,244,31,0,3,192,244,31,0,11,128,244,31,0,31,0,244,31,0,61,0,188,62,0,124,0,63,252,0,244,0,31,244,0,0,0,0,0,
  // 0x0026  &
  18,20,100,19,1,255,0,111,144,0,0,3,255,248,0,0,11,245,253,0,0,15,192,62,0,0,15,128,62,0,0,15,192,125,0,0,7,209,252,0,0,3,251,240,0,0,0,255,128,0,0,3,255,64,5,64,31,239,208,15,192,63,67,244,31,64,126,0,253,63,0,188,0,63,190,0,189,0,15,252,0,190,0,11,248,0,63,144,127,254,0,31,255,255,127,128,7,255,244,15,224,0,0,0,0,0,
  // 0x0027  '
  3,8,8,6,2,11,164,244,244,240,240,240,240,0,
  // 0x0028  (
  6,24,48,8,1,251,0,160,3,224,11,192,15,128,47,0,62,0,61,0,124,0,188,0,252,0,252,0,248,0,248,0,252,0,252,0,188,0,125,0,62,0,63,0,31,64,15,128,7,208,2,240,0,0,
  // 0x0029  )
  6,24,48,8,1,251,164,0,188,0,62,0,31,0,15,128,11,192,7,208,3,224,3,240,3,240,2,240,2,240,2,240,2,240,3,240,3,224,3,208,7,192,15,192,15,128,47,0,61,0,248,0,0,0,
  // 0x002a  *
  12,13,39,14,1,7,0,61,0,0,61,0,0,60,0,0,60,0,185,60,111,255,255,255,106,255,169,0,255,0,2,235,192,7,211,224,15,194,244,2,64,208,0,0,0,
  // 0x002b  +
  13,14,56,15,1,2,0,20,0,0,0,45,0,0,0,45,0,0,0,45,0,0,0,45,0,0,0,46,0,0,255,255,255,128,191,255,255,128,0,45,0,0,0,45,0,0,0,45,0,0,0,45,0,0,0,45,0,0,0,0,0,0,
  // 0x002c  ,
  4,7,7,7,1,252,63,63,62,124,188,244,80,
  // 0x002d  -
  7,3,6,8,1,5,255,244,255,244,0,0,
  // 0x002e  .
  4,5,5,7,2,255,16,252,253,252,16,
  // 0x002f  /
  10,19,57,10,0,0,0,2,144,0,3,208,0,11,192,0,15,128,0,31,64,0,47,0,0,62,0,0,124,0,0,252,0,0,244,0,2,240,0,3,224,0,7,208,0,11,192,0,15,128,0,31,0,0,63,0,0,61,0,0,188,0,0,
  // 0x0030  0
  13,20,80,15,1,255,0,190,64,0,7,255,240,0,31,234,252,0,63,0,126,0,62,0,63,0,125,0,31,64,188,0,31,64,188,0,15,128,252,0,15,128,252,0,15,128,252,0,15,128,188,0,15,128,188,0,15,128,124,0,31,64,61,0,47,0,63,0,63,0,31,129,253,0,11,255,248,0,2,255,208,0,0,0,0,0,
  // 0x0031  1
  8,19,38,15,2,0,0,41,0,254,7,254,47,254,190,62,56,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,0,62,
  // 0x0032  2
  13,19,76,15,1,0,1,190,128,0,31,255,244,0,127,235,252,0,60,0,126,0,0,0,63,0,0,0,63,0,0,0,63,0,0,0,126,0,0,0,252,0,0,2,244,0,0,11,224,0,0,47,128,0,0,190,0,0,1,248,0,0,7,224,0,0,31,128,0,0,127,85,85,64,255,255,255,128,255,255,255,128,
  // 0x0033  3
  13,20,80,15,1,255,1,190,128,0,47,255,244,0,127,170,253,0,36,0,127,0,0,0,63,0,0,0,63,0,0,0,62,0,0,1,252,0,2,191,224,0,3,255,144,0,2,171,252,0,0,0,127,0,0,0,47,64,0,0,31,64,0,0,31,64,0,0,63,0,228,1,254,0,255,255,252,0,127,255,208,0,0,0,0,0,
  // 0x0034  4
  15,19,76,15,0,0,0,0,42,0,0,0,191,0,0,1,255,0,0,3,255,0,0,15,191,0,0,31,63,0,0,61,63,0,0,248,63,0,2,240,63,0,7,192,63,0,15,128,63,0,47,0,63,0,126,85,127,80,127,255,255,244,127,255,255,244,0,0,63,0,0,0,63,0,0,0,63,0,0,0,63,0,
  // 0x0035  5
  13,20,80,15,1,255,10,170,168,0,31,255,252,0,47,255,252,0,47,0,0,0,47,0,0,0,47,0,0,0,62,0,0,0,63,85,0,0,63,255,244,0,47,255,253,0,0,0,191,0,0,0,63,64,0,0,31,64,0,0,31,64,0,0,47,64,0,0,63,0,117,1,254,0,127,255,248,0,47,255,208,0,0,16,0,0,
  // 0x0036  6
  13,20,80,15,1,255,0,10,248,0,0,255,253,0,3,254,89,0,15,208,0,0,47,64,0,0,63,0,0,0,61,0,0,0,124,26,144,0,189,255,252,0,191,230,255,0,191,0,47,64,189,0,15,128,188,0,15,128,188,0,15,128,61,0,15,128,63,0,47,64,31,208,191,0,11,255,252,0,1,255,224,0,0,0,0,0,
  // 0x0037  7
  13,19,76,15,1,0,170,170,170,64,255,255,255,128,255,255,255,128,0,0,47,0,0,0,63,0,0,0,125,0,0,0,252,0,0,1,244,0,0,3,240,0,0,7,224,0,0,11,192,0,0,15,128,0,0,47,0,0,0,63,0,0,0,189,0,0,0,252,0,0,1,244,0,0,3,240,0,0,7,224,0,0,
  // 0x0038  8
  13,20,80,15,1,255,0,174,128,0,11,255,248,0,47,214,253,0,63,0,63,0,61,0,47,0,62,0,47,0,63,0,62,0,15,209,252,0,7,255,224,0,2,255,208,0,15,251,248,0,63,64,190,0,125,0,47,64,188,0,15,128,252,0,15,128,188,0,31,64,127,64,127,0,47,255,253,0,7,255,224,0,0,0,0,0,
  // 0x0039  9
  13,20,80,15,1,255,0,174,64,0,11,255,240,0,47,235,252,0,63,0,126,0,188,0,47,0,252,0,31,64,252,0,15,64,252,0,15,128,189,0,47,128,63,64,191,128,47,255,239,64,7,255,79,64,0,0,31,0,0,0,47,0,0,0,62,0,0,0,252,0,0,7,244,0,47,255,208,0,47,254,0,0,1,0,0,0,
  // 0x003a  :
  4,16,16,7,2,255,16,252,253,252,16,0,0,0,0,0,0,16,252,253,252,16,
  // 0x003b  ;
  5,19,38,7,1,252,4,0,63,0,63,64,63,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,62,0,125,0,188,0,248,0,240,0,80,0,
  // 0x003c  <
  13,14,56,15,1,2,0,0,1,64,0,0,31,128,0,1,255,64,0,31,244,0,1,255,64,0,31,228,0,0,190,0,0,0,191,128,0,0,11,249,0,0,0,191,208,0,0,7,254,0,0,0,127,128,0,0,2,128,0,0,0,0,
  // 0x003d  =
  13,8,32,15,1,5,127,255,255,64,191,255,255,64,21,85,85,0,0,0,0,0,0,0,0,0,106,170,170,64,191,255,255,64,85,85,85,0,
  // 0x003e  >
  13,14,56,15,1,2,144,0,0,0,253,0,0,0,127,208,0,0,7,253,0,0,0,127,208,0,0,7,253,0,0,0,127,128,0,0,191,64,0,31,248,0,2,255,64,0,111,244,0,0,254,0,0,0,160,0,0,0,0,0,0,0,
  // 0x003f  ?
  11,20,60,12,0,255,6,254,0,127,255,224,127,171,244,16,0,252,0,0,252,0,0,252,0,0,248,0,3,240,0,31,192,0,127,0,0,252,0,1,240,0,1,240,0,0,80,0,0,0,0,0,64,0,2,244,0,3,248,0,2,244,0,0,64,0,
  // 0x0040  @
  21,22,132,23,1,253,0,0,22,144,0,0,0,11,255,255,64,0,0,127,229,111,224,0,1,248,0,1,248,0,7,208,0,0,61,0,15,128,22,80,31,0,31,1,255,253,15,64,61,3,229,125,7,128,60,15,128,61,7,192,124,15,0,60,3,192,120,31,0,60,3,192,184,31,0,60,7,128,184,31,0,124,11,64,124,15,64,253,15,0,60,11,251,223,190,0,61,2,255,7,248,0,47,0,0,0,0,0,15,128,0,0,0,0,3,244,0,6,0,0,0,255,234,255,0,0,0,27,255,249,0,0,0,0,4,0,0,0,
  // 0x0041  A
  17,19,95,17,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x0042  B
  14,19,76,17,2,0,106,169,64,0,191,255,253,0,191,255,255,64,189,0,47,192,189,0,15,192,189,0,15,192,189,0,15,192,189,0,47,64,191,255,253,0,191,255,248,0,190,86,191,64,189,0,15,192,189,0,7,224,189,0,7,224,189,0,7,224,189,0,15,208,190,85,191,192,191,255,255,0,191,255,228,0,
  // 0x0043  C
  15,20,80,16,1,255,0,6,254,64,0,191,255,244,2,255,171,240,11,244,0,80,31,192,0,0,47,64,0,0,63,0,0,0,62,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,63,0,0,0,63,0,0,0,47,128,0,0,15,224,0,0,7,253,5,176,1,255,255,240,0,47,255,224,0,0,16,0,
  // 0x0044  D
  16,19,76,19,2,0,106,169,64,0,191,255,253,0,191,255,255,128,189,0,47,224,189,0,3,244,189,0,1,252,189,0,0,252,189,0,0,189,189,0,0,189,189,0,0,125,189,0,0,189,189,0,0,189,189,0,0,252,189,0,1,252,189,0,3,244,189,0,15,240,190,86,255,192,191,255,254,0,191,255,144,0,
  // 0x0045  E
  11,19,57,14,2,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x0046  F
  11,19,57,14,2,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,189,85,80,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,
  // 0x0047  G
  16,20,80,19,1,255,0,6,191,144,0,127,255,254,2,255,234,252,11,248,0,4,15,208,0,0,47,128,0,0,63,0,0,0,62,0,0,0,126,0,0,0,125,0,63,255,126,0,63,255,126,0,21,127,63,0,0,63,63,0,0,63,47,128,0,63,15,224,0,63,7,253,64,127,1,255,255,255,0,47,255,249,0,0,16,0,
  // 0x0048  H
  15,19,76,19,2,0,104,0,0,104,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,191,255,255,252,191,255,255,252,190,170,170,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,
  // 0x0049  I
  7,19,38,9,1,0,170,168,255,252,47,228,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,255,252,255,252,
  // 0x004a  J
  7,25,50,8,254,250,0,104,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,188,0,252,87,248,255,240,255,128,0,0,
  // 0x004b  K
  14,19,76,16,2,0,104,0,2,160,189,0,15,208,189,0,63,64,189,0,190,0,189,1,248,0,189,7,240,0,189,15,192,0,189,63,0,0,189,253,0,0,191,255,0,0,191,255,64,0,191,15,192,0,189,7,240,0,189,2,248,0,189,0,253,0,189,0,127,0,189,0,47,128,189,0,15,208,189,0,3,240,
  // 0x004c  L
  11,19,57,14,2,0,104,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x004d  M
  20,19,95,24,2,0,106,64,0,1,168,191,192,0,3,253,191,192,0,7,253,191,224,0,11,253,190,240,0,15,125,189,244,0,31,125,188,248,0,62,125,188,188,0,60,125,188,61,0,188,125,188,62,0,244,125,188,31,1,240,125,188,15,66,224,125,188,15,195,208,125,188,7,199,192,125,188,3,223,128,125,188,2,255,64,125,188,1,255,0,125,188,0,254,0,125,188,0,188,0,125,
  // 0x004e  N
  16,19,76,20,2,0,106,0,0,41,191,128,0,62,191,192,0,62,191,240,0,62,191,244,0,62,188,252,0,62,188,190,0,62,188,63,64,62,188,31,192,62,188,11,224,62,188,3,240,62,188,1,252,62,188,0,253,62,188,0,63,62,188,0,47,190,188,0,15,254,188,0,7,254,188,0,2,254,188,0,0,254,
  // 0x004f  O
  18,20,100,20,1,255,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x0050  P
  13,19,76,16,2,0,106,169,64,0,191,255,244,0,191,255,253,0,189,0,191,0,189,0,47,64,189,0,31,128,189,0,31,128,189,0,47,64,189,0,63,0,190,91,254,0,191,255,248,0,191,255,128,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,
  // 0x0051  Q
  18,24,120,20,1,251,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,255,0,1,255,255,248,0,0,47,255,208,0,0,0,31,208,0,0,0,3,244,0,0,0,1,253,0,0,0,0,127,64,0,0,0,21,64,
  // 0x0052  R
  14,19,76,16,2,0,106,169,64,0,191,255,244,0,191,255,254,0,189,0,127,0,189,0,47,64,189,0,31,128,189,0,31,128,189,0,47,64,189,0,191,0,191,255,252,0,191,255,208,0,190,91,208,0,189,3,240,0,189,1,248,0,189,0,189,0,189,0,63,0,189,0,47,128,189,0,15,208,189,0,7,240,
  // 0x0053  S
  12,20,60,14,1,255,1,191,144,11,255,254,47,234,253,63,0,4,125,0,0,125,0,0,127,0,0,63,192,0,15,249,0,3,255,208,0,111,248,0,2,253,0,0,127,0,0,63,0,0,47,0,0,63,185,1,253,191,255,248,111,255,208,0,0,0,
  // 0x0054  T
  15,19,76,15,0,0,106,170,170,160,191,255,255,244,191,255,255,240,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,
  // 0x0055  U
  15,20,80,19,2,255,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x0056  V
  16,19,76,16,0,0,168,0,0,41,189,0,0,126,126,0,0,189,63,0,0,252,47,64,1,248,15,128,2,240,15,192,3,240,11,208,7,208,3,224,11,192,3,240,15,192,1,244,31,64,0,248,47,0,0,252,62,0,0,125,125,0,0,62,188,0,0,47,248,0,0,31,244,0,0,15,240,0,0,11,224,0,
  // 0x0057  W
  24,19,114,24,0,0,104,0,2,144,0,26,189,0,11,240,0,63,126,0,15,240,0,62,63,0,15,244,0,125,47,0,31,188,0,188,31,64,47,124,0,252,15,128,62,61,0,248,15,192,61,62,1,244,11,192,188,47,2,240,7,208,248,31,3,240,3,224,244,15,67,224,3,241,240,15,199,208,2,242,240,11,203,192,1,247,224,3,223,192,0,251,208,3,239,128,0,255,192,2,255,64,0,191,192,1,255,0,0,127,64,0,254,0,0,63,0,0,253,0,
  // 0x0058  X
  16,19,76,16,0,0,41,0,0,104,63,0,1,248,15,192,3,240,11,208,11,208,3,240,15,128,1,248,63,0,0,189,125,0,0,63,252,0,0,31,240,0,0,15,224,0,0,31,244,0,0,62,252,0,0,252,126,0,1,244,63,0,3,240,15,192,11,192,11,224,31,128,3,240,63,0,1,252,189,0,0,189,
  // 0x0059  Y
  15,19,76,15,0,0,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,
  // 0x005a  Z
  13,19,76,15,1,0,106,170,170,64,255,255,255,192,191,255,255,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,254,85,85,64,255,255,255,192,255,255,255,192,
  // 0x005b  [
  6,24,48,9,2,251,170,160,255,240,254,160,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,255,240,255,240,0,0,
  // 0x005c "\"
  10,19,57,10,0,0,104,0,0,124,0,0,62,0,0,47,0,0,31,64,0,15,128,0,11,192,0,3,208,0,3,240,0,1,240,0,0,248,0,0,188,0,0,125,0,0,62,0,0,47,0,0,15,64,0,15,192,0,7,192,0,3,224,
  // 0x005d  ]
  7,24,48,9,0,251,42,164,127,248,42,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,0,248,127,248,127,248,0,0,
  // 0x005e  ^
  13,13,52,15,1,6,0,40,0,0,0,61,0,0,0,191,0,0,0,251,128,0,2,227,192,0,3,194,224,0,7,128,240,0,15,0,184,0,31,0,60,0,61,0,46,0,124,0,15,0,244,0,11,128,0,0,0,0,
  // 0x005f  _
  12,3,9,11,0,251,170,170,168,255,255,253,0,0,0,
  // 0x0060  `
  6,5,10,8,1,15,189,0,63,0,15,192,3,224,0,0,
  // 0x0061  a
  12,16,48,15,1,255,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x0062  b
  13,21,84,16,2,255,184,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,191,224,0,255,255,252,0,255,64,191,0,254,0,63,0,252,0,31,128,252,0,15,128,252,0,15,128,252,0,15,128,252,0,15,128,252,0,31,128,254,0,63,0,255,128,191,0,251,255,252,0,244,191,224,0,0,0,0,0,
  // 0x0063  c
  11,15,45,13,1,255,1,255,248,11,255,248,47,208,96,63,0,0,126,0,0,189,0,0,188,0,0,188,0,0,189,0,0,126,0,0,63,0,0,47,208,40,15,255,248,1,255,244,0,0,0,
  // 0x0064  d
  13,21,84,16,1,255,0,0,11,128,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,2,255,139,192,15,255,255,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,15,192,126,0,15,192,63,0,31,192,47,192,127,192,15,255,251,192,2,255,135,192,0,0,0,0,
  // 0x0065  e
  13,15,60,15,1,255,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x0066  f
  10,20,60,9,0,0,0,47,224,0,255,240,3,249,96,3,240,0,3,224,0,3,224,0,47,255,192,191,255,192,7,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,3,224,0,
  // 0x0067  g
  13,21,84,16,1,249,2,255,135,192,15,255,251,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,255,192,2,255,143,192,0,0,15,192,0,0,15,192,0,0,31,128,41,0,127,0,47,255,254,0,27,255,244,0,0,0,0,0,
  // 0x0068  h
  13,20,80,16,2,0,184,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,191,244,0,254,255,253,0,255,128,191,0,254,0,63,0,252,0,47,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,
  // 0x0069  i
  3,20,20,7,2,0,16,252,252,116,0,0,252,252,252,252,252,252,252,252,252,252,252,252,252,252,
  // 0x006a  j
  7,27,54,7,254,249,0,16,0,252,0,252,0,116,0,0,0,0,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,1,248,191,240,191,208,0,0,
  // 0x006b  k
  12,20,60,15,2,0,184,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,190,252,2,248,252,11,224,252,31,128,252,126,0,253,252,0,255,248,0,255,254,0,254,63,64,252,15,192,252,7,224,252,2,248,252,0,253,252,0,127,
  // 0x006c  l
  3,20,20,7,2,0,184,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,
  // 0x006d  m
  21,14,84,25,2,0,244,191,240,63,248,0,251,255,252,255,255,0,255,64,255,208,127,64,254,0,127,64,31,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,252,0,63,0,15,128,
  // 0x006e  n
  13,15,60,16,2,0,0,1,0,0,244,191,244,0,251,255,253,0,255,128,191,0,254,0,63,0,252,0,47,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,
  // 0x006f  o
  14,15,60,16,1,255,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x0070  p
  13,21,84,16,2,249,244,191,240,0,251,255,252,0,255,64,191,0,254,0,63,64,252,0,31,128,252,0,15,128,252,0,15,128,252,0,15,128,252,0,15,128,252,0,31,64,254,0,63,0,255,128,191,0,255,255,252,0,252,191,224,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,252,0,0,0,0,0,0,0,
  // 0x0071  q
  13,21,84,16,1,249,2,255,135,192,15,255,251,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,15,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,255,192,2,255,143,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,0,0,
  // 0x0072  r
  9,15,45,11,2,0,0,1,0,244,127,128,249,255,64,255,229,0,255,0,0,253,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,
  // 0x0073  s
  11,16,48,13,1,255,0,16,0,11,255,224,63,255,240,189,0,144,188,0,0,190,0,0,63,224,0,15,254,0,1,255,208,0,11,240,0,2,244,0,1,244,160,3,240,191,255,224,127,255,64,0,64,0,
  // 0x0074  t
  10,18,54,10,0,255,2,192,0,3,192,0,7,192,0,47,255,192,191,255,192,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,208,0,7,240,0,3,255,208,0,255,208,0,0,0,
  // 0x0075  u
  12,15,45,16,2,255,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x0076  v
  14,14,56,14,0,0,252,0,7,208,125,0,15,192,63,0,15,128,47,0,31,64,31,128,63,0,15,192,62,0,11,192,188,0,3,224,252,0,3,240,244,0,1,242,240,0,0,251,224,0,0,191,208,0,0,127,192,0,0,63,128,0,
  // 0x0077  w
  21,14,84,21,0,0,188,0,63,0,15,128,125,0,127,64,47,64,62,0,255,192,63,0,47,0,247,192,62,0,31,65,243,208,125,0,15,130,227,224,188,0,15,195,210,240,252,0,11,195,192,240,248,0,7,203,192,245,244,0,3,219,128,186,240,0,3,239,64,126,224,0,2,255,0,63,208,0,1,254,0,63,192,0,0,253,0,31,192,0,
  // 0x0078  x
  14,14,56,14,0,0,63,0,15,192,31,128,47,64,11,208,127,0,3,240,252,0,1,250,244,0,0,191,224,0,0,63,192,0,0,63,192,0,0,255,240,0,1,249,248,0,3,240,189,0,15,192,63,0,47,64,31,128,127,0,11,208,
  // 0x0079  y
  14,21,84,14,0,249,252,0,7,224,126,0,15,192,63,0,15,192,47,64,31,64,15,128,63,0,15,192,62,0,7,208,188,0,3,224,252,0,2,240,244,0,0,246,240,0,0,251,224,0,0,127,208,0,0,63,192,0,0,47,128,0,0,47,0,0,0,63,0,0,0,125,0,0,1,252,0,0,191,240,0,0,191,192,0,0,0,0,0,0,
  // 0x007a  z
  11,14,42,12,1,0,191,255,240,191,255,240,0,7,240,0,15,192,0,47,64,0,126,0,0,252,0,2,244,0,7,224,0,15,192,0,63,0,0,190,0,0,255,255,244,255,255,244,
  // 0x007b  {
  9,24,72,10,0,251,0,1,128,0,63,192,0,191,128,0,252,0,0,244,0,0,244,0,0,244,0,0,244,0,0,244,0,2,240,0,27,224,0,127,64,0,127,208,0,3,240,0,1,244,0,0,244,0,0,244,0,0,244,0,0,244,0,0,248,0,0,253,0,0,127,192,0,31,192,0,0,0,
  // 0x007c  |
  2,27,27,14,6,249,160,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,0,
  // 0x007d  }
  9,24,72,10,1,251,144,0,0,255,0,0,191,128,0,15,192,0,7,192,0,7,192,0,7,192,0,7,192,0,7,192,0,7,224,0,3,249,0,0,127,64,1,255,64,3,240,0,7,208,0,7,192,0,7,192,0,7,192,0,7,192,0,11,192,0,31,192,0,255,64,0,253,0,0,0,0,0,
  // 0x007e  ~
  13,4,16,15,1,7,47,228,0,64,191,255,171,128,228,111,255,64,64,1,168,0,
};

#endif // HAS_GRAPHICAL_TFT
