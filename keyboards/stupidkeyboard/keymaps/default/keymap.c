// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base Layer (0)
     * ┌───────────────────────────┐  ┌───────────────────────────┐
     * │  Q │  W │  E │  R │  T │  │  │  Y │  U │  I │  O │  P │  │
     * │  A │  S │  D │  F │  G │  │  │  H │  J │  K │  L │  ; │  │
     * │  Z │  X │  C │  V │  B │  │  │  N │  M │  , │  . │  / │  │
     * └─────────┌────┼────┼────┤  │  ├────┼────┼────┐────────────┘
     *           │ TAB│ LAY│ SPC│  │  │ ENT│ LAY│ SFT│
     *           └────┴────┴────┘  │  └────┴────┴────┘
     */
    [0] = LAYOUT_split_3x5_3(
        // Left hand
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                          KC_TAB,  MO(1),   KC_SPC,

        // Right hand
        KC_Y,    KC_U,     KC_I,      KC_O,    KC_P,
        KC_H,    KC_J,     KC_K,      KC_L,    KC_SCLN,
        KC_N,    KC_M,     KC_COMM,   KC_DOT,  KC_SLSH,
        KC_ENT,  MO(2),    KC_LSFT
    ),

    [1] = LAYOUT_split_3x5_3(
        // Left hand
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS,

        // Right hand
        KC_6,    KC_7,     KC_8,      KC_9,    KC_0,
        KC_CIRC, KC_AMPR,  KC_ASTR,   KC_LPRN, KC_RPRN,
        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_split_3x5_3(
        // Left hand
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS,

        // Right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
