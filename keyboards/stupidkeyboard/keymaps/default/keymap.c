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
     * │ ESC│ SPC│ TAB│  │  │ ENT│ BSP│ DEL│
     * └────┴────┴────┘  │  └────┴────┴────┘
     */
    [0] = LAYOUT_split_3x5_3(
        // Left hand
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,
        KC_F,    KC_G,    KC_H,    KC_I,    KC_L,
        KC_M,    KC_N,    KC_O,    KC_P,    KC_Q,
        KC_R,    KC_S,    KC_T

        // Right hand
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
