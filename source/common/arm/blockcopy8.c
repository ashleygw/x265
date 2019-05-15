#include <arm_neon.h>
#ifndef vdupq_laneq_u32
#define vdupq_laneq_u32 neon_dupqe32q
#endif
void x265_blockfill_s_64x64_neon(int16_t* dst, intptr_t dstride, int16_t val){
	int16x8_t store;
	store = vdupq_n_s16(val);
	for (int y = 0; y < 64; y++){
		for (int x = 0; x < 64; x+=8){
			vst1q_s16(&dst[y*dstride+x],store);
		}
	}
};
