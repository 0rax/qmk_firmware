#ifndef USERSPACE_0RAX_CONFIG_H
#define USERSPACE_0RAX_CONFIG_H

// Oneshot keys config & definition
#define ONESHOT_TAP_TOGGLE 2             // Number of tap needle to toggle key hold (x time to hold, x time to release)
#define ONESHOT_TIMEOUT    5000          // Time (in ms) before the one shot key is released
#define OSM_SFT            OSM(MOD_LSFT) // Make LSHIFT acts as CPSLCK when pressed twice

#endif
