#include "ap_int.h"

typedef struct {
	ap_uint<16> data;
	ap_uint<1> last;
} axisconfig_t;

#define N_CHAN 512

void phasematch_fir_cfg(axisconfig_t config[N_CHAN]);
