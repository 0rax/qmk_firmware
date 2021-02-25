#include QMK_KEYBOARD_H

// Keymaps definition for each layer (https://docs.qmk.fm/#/keymap?id=layers-and-keymaps)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // ,------------------------.
  // |  7  |  8  |  9  |/(Bpc)|
  // |-----+-----+-----+------|
  // |  4  |  5  |  6  |*(Del)|
  // |-----+-----+-----+------|
  // |  1  |  2  |  3  |-(Tab)|
  // |-----+-----+-----+------|
  // |  0  |  .  |  =  | +(⏎) |
  // `------------------------'
  [0] = LAYOUT_4x4(
    KC_P7,   KC_P8,   KC_P9,   TD(KC_PSLS),\
    KC_P4,   KC_P5,   KC_P6,   TD(KC_PAST), \
    KC_P1,   KC_P2,   KC_P3,   TD(MNSTAB), \
    KC_P0,   KC_PDOT, KC_PEQL, TD(KC_PPLS) ),
};
