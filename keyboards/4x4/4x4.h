#ifndef FOURXFOUR_H
#define FOURXFOUR_H

#include "quantum.h"

//
// Layout: ortho_4x4
// Setup: Single 4x4 PCB
//

#define LAYOUT_4x4( \
	k00, k01, k02, k03, \
	k10, k11, k12, k13, \
	k20, k21, k22, k23, \
	k30, k31, k32, k33 \
) \
{ \
	{ k00, k01, k02, k03, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k10, k11, k12, k13, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k20, k21, k22, k23, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k30, k31, k32, k33, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_4x4( \
	k00, k01, k02, k03, \
	k10, k11, k12, k13, \
	k20, k21, k22, k23, \
	k30, k31, k32, k33 \
	) \
	LAYOUT_4x4( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33 \
	)

#define LAYOUT_ortho_4x4     LAYOUT_4x4
#define LAYOUT_kc_ortho_4x4  KC_KEYMAP_4x4
#define KC_LAYOUT_ortho_4x4  KC_KEYMAP_4x4

//
// Layout: ortho_4x8
// Setup: Two 4x4 PCB chained
//

#define LAYOUT_4x8( \
	k00, k01, k02, k03, k04, k05, k06, k07, \
	k10, k11, k12, k13, k14, k15, k16, k17, \
	k20, k21, k22, k23, k24, k25, k26, k27, \
	k30, k31, k32, k33, k34, k35, k36, k37 \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k10, k11, k12, k13, k14, k15, k16, k17, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k20, k21, k22, k23, k24, k25, k26, k27, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k30, k31, k32, k33, k34, k35, k36, k37, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_4x8( \
	k00, k01, k02, k03, k04, k05, k06, k07, \
	k10, k11, k12, k13, k14, k15, k16, k17, \
	k20, k21, k22, k23, k24, k25, k26, k27, \
	k30, k31, k32, k33, k34, k35, k36, k37 \
	) \
	LAYOUT_4x8( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06, KC_##k07, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_##k26, KC_##k27, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36, KC_##k37 \
	)

#define LAYOUT_ortho_4x8     LAYOUT_4x8
#define LAYOUT_kc_ortho_4x8  KC_KEYMAP_4x8
#define KC_LAYOUT_ortho_4x8  KC_KEYMAP_4x8

//
// Layout: ortho_4x12 plank_mit
// Setup: Three 4x4 PCB chained
//

#define LAYOUT_4x12( \
	  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
	  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
	  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
	  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B  \
) { \
	{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, KC_NO, KC_NO, KC_NO }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, KC_NO, KC_NO, KC_NO }, \
	{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, KC_NO, KC_NO, KC_NO }, \
	{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, KC_NO, KC_NO, KC_NO }  \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_4x12( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b \
	) \
	LAYOUT_4x12( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08, KC_##k09, KC_##k0a, KC_##k0b, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, KC_##k1a, KC_##k1b, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28, KC_##k29, KC_##k2a, KC_##k2b, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38, KC_##k39, KC_##k3a, KC_##k3b \
	)

#define LAYOUT_ortho_4x12    LAYOUT_4x12
#define LAYOUT_kc_ortho_4x12 KC_KEYMAP_4x12
#define KC_LAYOUT_ortho_4x12 KC_KEYMAP_4x12

//
// Layout: ortho_4x16
// Setup: Four 4x4 PCB chained
//

#define LAYOUT_4x16( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, k3f \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f }, \
	{ k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f }, \
	{ k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f }, \
	{ k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, k3f } \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_4x16( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, k3f \
	) \
	LAYOUT_4x16( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08, KC_##k09, KC_##k0a, KC_##k0b, KC_##k0c, KC_##k0d, KC_##k0e, KC_##k0f, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, KC_##k1a, KC_##k1b, KC_##k1c, KC_##k1d, KC_##k1e, KC_##k1f, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28, KC_##k29, KC_##k2a, KC_##k2b, KC_##k2c, KC_##k2d, KC_##k2e, KC_##k2f, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38, KC_##k39, KC_##k3a, KC_##k3b, KC_##k3c, KC_##k3d, KC_##k3e, KC_##k3f \
	)

#define LAYOUT_ortho_4x16    LAYOUT_4x16
#define LAYOUT_kc_ortho_4x16 KC_KEYMAP_4x16
#define KC_LAYOUT_ortho_4x16 KC_KEYMAP_4x16

#endif
