#ifndef FOURXFOUR_H
#define FOURXFOUR_H

#include "quantum.h"

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

#endif
