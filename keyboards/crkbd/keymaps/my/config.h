#pragma once

#define SPLIT_USB_DETECT

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100


#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define OLED_DISPLAY_128x32
#define COMBO_COUNT 1
#define SPLIT_LAYER_STATE_ENABLE

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD //Both Shifts pressed together activates capitalisation for 1 word.
#define CAPS_WORD_IDLE_TIMEOUT 3000     // 3 seconds
