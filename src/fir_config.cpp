#include "fir_config.hpp"

void phasematch_fir_cfg(axisconfig_t config[N_CHAN]){
#pragma HLS INTERFACE axis register reverse port=config
#pragma HLS INTERFACE ap_ctrl_none port=return

	for(unsigned int i=0; i<N_CHAN; i++){
//#pragma HLS PIPELINE
		config[i].data=i;
		config[i].last = i==N_CHAN-1;
	}
}
