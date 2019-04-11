#include QMK_KEYBOARD_H

// Change color of the underglow based on the current layer (test code)
uint32_t layer_state_set_user(uint32_t state) {
    // switch (biton32(state)) {
    // case _BL:
    //     rgblight_setrgb (0x00,  0x00, 0xFF);
    //     break;
    // case _FL:
    //     rgblight_setrgb (0xFF,  0x00, 0x00);
    //     break;
    // default: // for any other layers
    //     rgblight_setrgb (0x00,  0xFF, 0xFF);
    //     break;
    // }
  return state;
}

// EXTRA: RGB Underglow based on layer (https://docs.qmk.fm/#/custom_quantum_functions?id=example-layer_state_set_-implementation)
