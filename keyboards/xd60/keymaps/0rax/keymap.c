#include QMK_KEYBOARD_H

// Layer definitions (https://docs.qmk.fm/#/keymap)
enum x60_layers {
  _BL,
  _FL,
};

// Keymaps definition for each layer (https://docs.qmk.fm/#/keymap?id=layers-and-keymaps)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // _BL: Base Layer
  // ,-----------------------------------------------------------------------------------------.
  // | ESC`|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  +  | BACKSPACE |
  // |-----------------------------------------------------------------------------------------|
  // | TAB    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |  Enter |
  // |---------------------------------------------------------------------------------|       |
  // | BSPC    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |  ~  |       |
  // |-----------------------------------------------------------------------------------------|
  // | SFT |  \  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  ?  | SFT | UP↑ | DEL |
  // |-----------------------------------------------------------------------------------------|
  // | LCTL | LGUI | LALT | LGUI |             SPACE             | ALT | FN  | LF← | DW↓ | RG→ |
  // `-----------------------------------------------------------------------------------------'
  [_BL] = LAYOUT_all(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_NO,   \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_NO,   \
    KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS,           KC_ENT,  \
    OSM_SFT,   KC_NUBS,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,KC_DEL,  \
    KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          KC_RGUI, MO(_FL), KC_LEFT, KC_DOWN,  KC_RIGHT),

  // _FL: Function Layer
  // ,-----------------------------------------------------------------------------------------.
  // |RESET| F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    DELETE |
  // |-----------------------------------------------------------------------------------------|
  // |        |     |     |     |     |     |     |     |     |     |     |     |     |  Enter |
  // |---------------------------------------------------------------------------------|       |
  // | DELETE  |     |     |VOLM↓|VMUTE|VOLM↑|MED◂◂|MED▮▮|MED▸▸|     |     |     |     |       |
  // |-----------------------------------------------------------------------------------------|
  // | SFT |RGBTG|RGBMD| CUT |COPY |PASTE|RGBH↑|RGBH↓|RGBS↑|RGBS↓|RGBB↑|RGBB↓|HOME | PG↑ | END |
  // |-----------------------------------------------------------------------------------------|
  // | LCTL | LGUI | LALT | LGUI |             SPACE             | ALT | FN  |     | PG↓ |     |
  // `-----------------------------------------------------------------------------------------'
  [_FL] = LAYOUT_all(
    RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,  KC_NO,  \
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,    KC_NO,            KC_NO,  \
    KC_DEL,  KC_NO,   KC_NO,   KC_VOLD,KC_MUTE,KC_VOLU, KC_MPRV,KC_MPLY,KC_MNXT,KC_NO,  KC_NO,   KC_NO,   KC_NO,              KC_ENT, \
    OSM_SFT, RGB_TOG, RGB_MOD, KC_CUT,  KC_COPY,KC_PASTE,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD, KC_HOME, KC_PGUP,   KC_END, \
    KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                          KC_RGUI, MO(_FL), KC_NO,   KC_PGDOWN, KC_NO),
};

// Macro definitions (https://docs.qmk.fm/#/feature_macros)
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case F(0):
      // When F(0) is pressed and hold, swith RGB to RED
      // then set it back to BLUE when the key is released
      if (record->event.pressed) {
        // Action on Press
        #ifdef RGBLIGHT_ENABLE
          rgblight_flag_uk();
        #endif
      } else {
        // Action on Release
        #ifdef RGBLIGHT_ENABLE
          rgblight_sethsv_noeeprom_blue();
        #endif
      }
      // Let QMK process the press/release events normally after that
      // Setting it to false wll prevent any further processing
      return true;
    default:
      // Process all other keycodes normally
      return true;
  }
};
