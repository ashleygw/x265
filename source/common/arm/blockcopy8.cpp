#include <arm_neon.h>
template<int size>
void x265_blockfill_s_64x64_neon(int16_t* dst, intptr_t dstride, int16_t val){
	for (int y = 0; y < size; y++){
		for (int x = 0; x < size; x++){
			dst[y * dstride + x] = val;
		}
	}
};
