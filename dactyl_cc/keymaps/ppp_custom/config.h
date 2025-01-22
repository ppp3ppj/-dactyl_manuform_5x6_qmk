// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* mouse config */
#define MOUSEKEY_DELAY          0
// Lowering MOUSEKEY_INTERVAL raises the cursor speed significantly, you may want to lower MOUSEKEY_MAX_SPEED (default: 10)
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED       7
#define MOUSEKEY_WHEEL_DELAY 0

/* layer config */
#define TAPPING_TOGGLE 1

//#define MASTER_LEFT
#define MASTER_RIGHT

#define USE_SERIAL


// Enable a software watchdog on any side delegated as slave and will reboot the keyboard if no successful communication
// This setup causes the assertion failure because the watchdog timer needs to be set to a value greater than the USB timeout
// Ex. SPLIT USB TIMEOUT 4000, WATCHDOG TIMEOUT 5000

// Detect on cold boot
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
