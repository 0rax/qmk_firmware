#include QMK_KEYBOARD_H

enum fourxfour_layers {
  _BL,
  _AL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_4x4(
    KC_ESC,  KC_1,    KC_2,    KC_3, \
    KC_TAB,  KC_4,    KC_5,    KC_6, \
    KC_LSFT, KC_7,    KC_8,    KC_9, \
    F(0),    KC_PDOT, KC_0,    KC_ENTER),
  [_AL] = LAYOUT_4x4(
    KC_ESC,  KC_F1,     KC_F2,   KC_F3, \
    KC_TAB,  KC_PGDOWN, KC_UP,   KC_PGUP, \
    KC_LSFT, KC_LEFT,   KC_DOWN, KC_RIGHT, \
    F(0),    KC_PDOT,   KC_0,    KC_ENTER),
};

const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(_AL),
};
