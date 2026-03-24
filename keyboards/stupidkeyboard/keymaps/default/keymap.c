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
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_Q,    KC_Q,    KC_Q,

        // Right hand
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_Q,
        KC_Q,  KC_Q, KC_Q, // Note: The JSON matrix mapping determines the exact physical thumb order, you may need to swap these three depending on your wiring!
        KC_N,    KC_M,    KC_Q, KC_Q,  KC_Q
        /* Correction on order: Layout macro arguments usually read top-to-bottom,
           left-to-right rows, then thumbs. Adjusting the exact argument order
           below to match standard QMK split_3x5_3 conventions. */
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
