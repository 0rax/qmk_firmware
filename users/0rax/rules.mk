SRC += 0rax.c

# Add RGB related files if enabled
ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  SRC += rgbflag.c
endif
