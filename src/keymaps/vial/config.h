/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* VIAL UID for Lily58*/
#define VIAL_KEYBOARD_UID {0x37, 0x37, 0x38, 0x31, 0x36, 0x64, 0x65, 0x38}

/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 4}

/* Space reduction */

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define VIAL_TAP_DANCE_ENTRIES 4
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#define OLED_FONT_H "glcdfont_allium.c"

// Custom features

#define SHOW_CAPS // Show if caps lock is enabled
#define TRACK_WPM_MAX // Track max wpm in session
#define SHOW_GUI_CTL_SWAP // Show operating system for current gui/ctrl swap (requires magic)
#define TRACK_SESSION_KEYSTROKE_COUNT // Track the keystroke count for session

// Handedness

#define MASTER_RIGHT
// #define MASTER_LEFT
