/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Standard Marlin Boot Screen bitmaps
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#include <binary.h>

#include "../../inc/MarlinConfig.h"

#if ENABLED(SHOW_BOOTSCREEN)

  //#define START_BMPHIGH // Costs 399 bytes more flash

  #if ENABLED(SHOW_CUSTOM_BOOTSCREEN)

    #include "../../../_Bootscreen.h"

    #ifndef CUSTOM_BOOTSCREEN_TIMEOUT
      #define CUSTOM_BOOTSCREEN_TIMEOUT 2500
    #endif

  #endif

  #if ENABLED(START_BMPHIGH)

    #define START_BMPWIDTH      112

    const unsigned char start_bmp[] PROGMEM = {
      B00000001,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
      B00001111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
      B00011110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,
      B00111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111111,
      B01110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,
      B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,
      B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,
      B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00111111,B11111111,
      B11000000,B00001111,B11000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00011000,B00000000,B00011111,B11111111,
      B11000000,B00111111,B11100001,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00111100,B00000000,B00001111,B11111111,
      B11000000,B01111111,B11110011,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00111100,B00000000,B00000111,B11111111,
      B11000000,B11111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B01111000,B00111100,B00000000,B00000011,B11111111,
      B11000001,B11111000,B01111111,B10000111,B11100000,B00000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000001,B11111111,
      B11000001,B11110000,B00111111,B00000011,B11100000,B00000000,B00000000,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,B11111111,
      B11000001,B11100000,B00011110,B00000001,B11100000,B00011111,B00000000,B00000011,B11100000,B01111000,B00111100,B00000011,B11110000,B01111111,
      B11000001,B11100000,B00011110,B00000001,B11100000,B01111111,B11000000,B00001111,B11111000,B01111000,B00111100,B00000111,B11111100,B00111111,
      B11000001,B11100000,B00011110,B00000001,B11100001,B11111111,B11100000,B00011111,B11111100,B01111000,B00111100,B00001111,B11111110,B00011111,
      B11000001,B11100000,B00011110,B00000001,B11100011,B11111111,B11110000,B00111111,B11111110,B01111000,B00111100,B00011111,B11111110,B00001111,
      B11000001,B11100000,B00011110,B00000001,B11100011,B11110011,B11111000,B00111111,B00111110,B01111000,B00111100,B00111111,B00111111,B00000111,
      B11000001,B11100000,B00011110,B00000001,B11100111,B11100000,B11111100,B01111100,B00011111,B01111000,B00111100,B00111110,B00011111,B00000111,
      B11000001,B11100000,B00011110,B00000001,B11100111,B11000000,B01111100,B01111100,B00001111,B01111000,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100111,B10000000,B01111100,B01111000,B00001111,B01111000,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100111,B10000000,B00111100,B01111000,B00000000,B01111000,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100111,B10000000,B00111100,B01111000,B00000000,B01111000,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100111,B10000000,B00111100,B01111000,B00000000,B01111000,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100111,B11000000,B00111100,B01111000,B00000000,B01111000,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100011,B11100000,B00111100,B01111000,B00000000,B01111100,B00111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100011,B11111111,B00111111,B11111000,B00000000,B01111111,B10111100,B00111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100001,B11111111,B00111111,B11111000,B00000000,B00111111,B10111111,B11111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100000,B11111111,B00111111,B11111000,B00000000,B00011111,B10111111,B11111100,B00001111,B00000011,
      B11000001,B11100000,B00011110,B00000001,B11100000,B01111111,B00111111,B11111000,B00000000,B00001111,B10111111,B11111100,B00001111,B00000011,
      B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,
      B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
      B01110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001110,
      B00111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,
      B00011110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111000,
      B00001111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11110000,
      B00000001,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B10000000
    };

  #else

    #define START_BMPWIDTH      56

    const unsigned char start_bmp[] PROGMEM = {
      B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
      B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
      B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
      B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
      B10000011,B11001111,B00000000,B00000000,B00001100,B00110000,B00111111,
      B10000111,B11111111,B10000000,B00000000,B00001100,B00110000,B00011111,
      B10000110,B01111001,B10000000,B00000000,B00001100,B00000000,B00001111,
      B10001100,B00110000,B11000111,B10000011,B10001100,B00110000,B11100111,
      B10001100,B00110000,B11001111,B11000111,B11001100,B00110001,B11110011,
      B10001100,B00110000,B11011100,B11101100,B11101100,B00110011,B10111001,
      B10001100,B00110000,B11011000,B01101100,B01101100,B00110011,B00011001,
      B10001100,B00110000,B11010000,B01101100,B00001100,B00110011,B00011001,
      B10001100,B00110000,B11011000,B01101100,B00001100,B00110011,B00011001,
      B10001100,B00110000,B11011100,B01101100,B00001110,B00111011,B00011001,
      B10001100,B00110000,B11001111,B01111100,B00000111,B10011111,B00011001,
      B10001100,B00110000,B11000111,B01111100,B00000011,B10001111,B00011001,
      B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
      B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
      B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
    };

  #endif

  #ifndef START_BMP_BYTEWIDTH
    #define START_BMP_BYTEWIDTH ((START_BMPWIDTH + 7) / 8)
  #endif
  #ifndef START_BMPHEIGHT
    #define START_BMPHEIGHT (sizeof(start_bmp) / (START_BMP_BYTEWIDTH))
  #endif

  static_assert(sizeof(start_bmp) == (START_BMP_BYTEWIDTH) * (START_BMPHEIGHT), "Bootscreen (start_bmp) dimensions don't match data.");

#endif

#ifndef CUSTOM_BOOTSCREEN_BMP_BYTEWIDTH
  #define CUSTOM_BOOTSCREEN_BMP_BYTEWIDTH ((CUSTOM_BOOTSCREEN_BMPWIDTH + 7) / 8)
#endif
#ifndef CUSTOM_BOOTSCREEN_BMPHEIGHT
  #define CUSTOM_BOOTSCREEN_BMPHEIGHT (sizeof(custom_start_bmp) / (CUSTOM_BOOTSCREEN_BMP_BYTEWIDTH))
#endif
