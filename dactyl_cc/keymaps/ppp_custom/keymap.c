// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    NAV
};

//#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_CAP LCTL_T(KC_CAPS)
//#define ALT_BSP LALT_T(KC_BSPC)
#define LT_SCLN LT(NAV, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                                         KC_6, KC_7,    KC_8,    KC_9,   KC_0,    KC_EQL,
        KC_TAB,  KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,                                         KC_Y, KC_U,    KC_I,    KC_O,   KC_P,    KC_MINUS,
        CTL_CAP, KC_A,    KC_S,   KC_D,    KC_F,    KC_G,                                         KC_H, KC_J,    KC_K,    KC_L,   LT_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,                                         KC_N, KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                 KC_BSLS, KC_GRV, KC_LEFT, KC_RIGHT,                                                     KC_DOWN, KC_UP, KC_RBRC,  KC_LBRC,
                                                          KC_LCTL,  KC_LALT,     KC_RALT, KC_RCTL,
                                                 KC_SPC, KC_TAB, KC_LGUI,     KC_LGUI, KC_ENT,  KC_BSPC,
                                                                   TT(NAV),     KC_ESC
    ),
    [NAV] = LAYOUT(
        KC_F1, KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6,                                           KC_F7, KC_F8,   KC_F9,  KC_F10,   KC_F11,   KC_F12,
        _______, _______, _______, _______, _______, _______,                                         _______, _______,   _______,  _______,   _______, _______,
        _______, _______, _______, _______, _______, _______,                                         _______, _______,   _______,  _______,   _______, _______,
        _______,   _______,   _______,   _______,   _______,   _______,                                           _______, _______, _______,  _______, _______, _______,
                 _______,   _______,   _______,   _______,                                                             _______,   _______, _______,  _______,
                                                              _______, _______,     _______, _______,
                                                     _______, _______, _______,     _______,  _______, _______,
                                                                       _______,     _______
    )
};
