#ifndef FIVEXFIVE_H
#define FIVEXFIVE_H

#include "quantum.h"

//
// Layout: ortho_5x5
// Setup: Single 5x5 PCB
//

#define LAYOUT_5x5( \
	k00, k01, k02, k03, k04, \
	k10, k11, k12, k13, k14, \
	k20, k21, k22, k23, k24, \
	k30, k31, k32, k33, k34, \
	k40, k41, k42, k43, k44  \
) \
{ \
	{ k00, k01, k02, k03, k04, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k10, k11, k12, k13, k14, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k20, k21, k22, k23, k24, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k30, k31, k32, k33, k34, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ k40, k41, k42, k43, k44, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_5x5( \
	k00, k01, k02, k03, k04, \
	k10, k11, k12, k13, k14, \
	k20, k21, k22, k23, k24, \
	k30, k31, k32, k33, k34, \
	k40, k41, k42, k43, k44  \
	) \
	LAYOUT_5x5( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, \
		KC_##k40, KC_##k41, KC_##k42, KC_##k43, KC_##k44  \
	)

#define LAYOUT_ortho_5x5     LAYOUT_5x5
#define LAYOUT_kc_ortho_5x5  KC_KEYMAP_5x5
#define KC_LAYOUT_ortho_5x5  KC_KEYMAP_5x5

//
// Layout: ortho_5x10
// Setup: Two 5x5 PCB chained
//

#define LAYOUT_5x10( \
	  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
	  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
	  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
	  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, \
	  K40, K41, K42, K43, K44, K45, K46, K47, K48, K49  \
) { \
	{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K40, K41, K42, K43, K44, K45, K46, K47, K48, K49 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_5x10( \
	  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
	  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
	  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
	  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, \
	  K40, K41, K42, K43, K44, K45, K46, K47, K48, K49  \
	) \
	LAYOUT_5x10( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08, KC_##k09, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28, KC_##k29, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38, KC_##k39, \
		KC_##k40, KC_##k41, KC_##k42, KC_##k43, KC_##k44, KC_##k45, KC_##k46, KC_##k47, KC_##k48, KC_##k49  \
	)

#define LAYOUT_ortho_5x10    LAYOUT_5x10
#define LAYOUT_kc_ortho_5x10 KC_KEYMAP_5x10
#define KC_LAYOUT_ortho_5x10 KC_KEYMAP_5x10

//
// Layout: ortho_5x15
// Setup: Three 5x5 PCB chained
//

#define LAYOUT_5x15( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
	k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, k4d, k4e  \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e }, \
	{ k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e }, \
	{ k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e }, \
	{ k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e }, \
	{ k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, k4d, k4e }  \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP_5x15( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
	k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
	k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, k4d, k4e  \
	) \
	LAYOUT_5x15( \
		KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08, KC_##k09, KC_##k0a, KC_##k0b, KC_##k0c, KC_##k0d, KC_##k0e, \
		KC_##k10, KC_##k11, KC_##k12, KC_##k13, KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, KC_##k1a, KC_##k1b, KC_##k1c, KC_##k1d, KC_##k1e, \
		KC_##k20, KC_##k21, KC_##k22, KC_##k23, KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28, KC_##k29, KC_##k2a, KC_##k2b, KC_##k2c, KC_##k2d, KC_##k2e, \
		KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38, KC_##k39, KC_##k3a, KC_##k3b, KC_##k3c, KC_##k3d, KC_##k3e, \
		KC_##k40, KC_##k41, KC_##k42, KC_##k43, KC_##k44, KC_##k45, KC_##k46, KC_##k47, KC_##k48, KC_##k49, KC_##k4a, KC_##k4b, KC_##k4c, KC_##k4d, KC_##k4e  \
	)

#define LAYOUT_ortho_5x15    LAYOUT_5x15
#define LAYOUT_kc_ortho_5x15 KC_KEYMAP_5x15
#define KC_LAYOUT_ortho_5x15 KC_KEYMAP_5x15

#endif
