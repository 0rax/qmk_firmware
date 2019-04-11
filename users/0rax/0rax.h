#ifndef USERSPACE_0RAX_H
#define USERSPACE_0RAX_H

// Defines when to send ESC and when to send GRAVE on GESC trigger
#define GRAVE_MODS (MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

// Macro keycode deinitions https://docs.qmk.fm/#/feature_macros
enum macro_keycodes {
  RGB_UK = SAFE_RANGE,
  RGB_FR,
  K_GESC,
  K_RESET,
};

#endif
