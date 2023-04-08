/* 
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Ha Thach (tinyusb.org) for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BOARDS_H_
#define BOARDS_H_

#ifdef __cplusplus
 extern "C" {
#endif

#include "def.h"


#define UF2_FAMILY_ID         0x57755a57
#define UF2_VERSION           "1.0.0"
#define BOARD_UF2_FAMILY_ID   UF2_FAMILY_ID

//--------------------------------------------------------------------+
// Flash
//--------------------------------------------------------------------+

// Flash size of the board
#define BOARD_FLASH_SIZE      (512 * 1024)
#define BOARD_FLASH_SECTORS   8

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID           0x239A
#define USB_PID           0x0069
#define USB_MANUFACTURER  "BARAM"
#define USB_PRODUCT       "STM32F411 B/D"

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID      "STM32F411-BlackPill-rev2"
#define UF2_VOLUME_LABEL  "STMF411BOOT"
#define UF2_INDEX_URL     "https://blog.naver.com/chcbaram"

#define USB_NO_VBUS_PIN   1

// Flash Start Address of Application
#define BOARD_FLASH_APP_START   0x08010000

// Double Reset tap to enter DFU
#define TINYUF2_DFU_DOUBLE_TAP  0

// Enable write protection
#define TINYUF2_PROTECT_BOOTLOADER    0

// Brightness percentage from 1 to 255
#ifndef NEOPIXEL_BRIGHTNESS
#define NEOPIXEL_BRIGHTNESS   0x10
#endif

#ifdef LED_PIN
#define TINYUF2_LED             1
#endif

#ifdef __cplusplus
 }
#endif

#endif /* BOARDS_H_ */
