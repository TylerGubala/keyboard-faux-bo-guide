// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_LSFT, KC_F8,      KC_F9,      KC_F10,     KC_F11,  KC_F12, KC_RSFT,
        KC_NO,   KC_LEFT,    KC_UP,      KC_RIGHT,   KC_INS,  KC_Q,   KC_W,
        KC_GRV,  KC_F7,      KC_DOWN,    KC_NO,      KC_A,    KC_S,   KC_F6,
        KC_DEL,  KC_BSPC,    KC_I,       KC_ENT,     KC_HOME, KC_Z,   KC_X,
        KC_P7,   KC_P8,      KC_P9,      LALT(KC_1), KC_END,  KC_E,   KC_R,
        KC_P4,   KC_P5,      KC_P6,      LALT(KC_2), KC_PPLS, KC_D,   KC_F,
        KC_P1,   KC_P2,      KC_P3,      LALT(KC_3), KC_ESC,  KC_C,   KC_V,
        KC_P0,   KC_PDOT,    KC_PMNS,    LALT(KC_4), KC_PGUP, KC_T,   KC_Y,
        KC_PCMM, LALT(KC_5), LALT(KC_6), LALT(KC_7), KC_PGDN, KC_G,   KC_H
    )
};
