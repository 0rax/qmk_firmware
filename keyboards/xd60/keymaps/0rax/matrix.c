#include QMK_KEYBOARD_H

// Keyboard Matrix Initialization (https://docs.qmk.fm/#/custom_quantum_functions?id=matrix-initialization-code)
void matrix_init_user(void)
{
  // RGB Lighting setup (https://docs.qmk.fm/#/feature_rgblight)
  rgblight_enable();      // Enable RGB Lighting
  rgblight_mode(1);       // Set RGB Mode to PLAIN
  rgblight_sethsv_blue(); // Set RGB Color to BLUE
}
