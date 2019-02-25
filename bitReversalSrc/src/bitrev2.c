/* Bit reversal exercise */
/* By R A Hemesley, 2019 */

#include "bitrev.h"

#define LOWEST_NIBBLE_MASK  0x0F
#define HIGHEST_NIBBLE_MASK 0xF0

static const uint8_t LUT[] = {0x0, 0x8, 0x4, 0xC, \
					          0x2, 0xA, 0x6, 0xE, \
					          0x1, 0x9, 0x5, 0xD, \
							  0x3, 0xB, 0x7, 0xF};

/*
 * @brief Reverses the bits in the uint8_t input variable. 
 * 
 * The input remains unchanged. The bit-reversed input is placed into 
 * the output variable. 
 * 
 * This implementation considers the input one nibble at a time and 
 * uses the value of each nibble as the index to a look-up-table whose 
 * content is the precomputed bit reversal. The value looked-up is then 
 * shifted into the appropriate nibble of the output variable. This 
 * method could easily be extended to operate upon larger variable 
 * types, such as uint32_t with the same LUT, but more shift operations 
 * would be required when computing the result. 
 * 
 * @param[in] uint8_t *input - a pointer to the input variable. 
 * @param[out] uint8_t *output - a pointer to the output variable. 
 */
void bitReversal(uint8_t *input, uint8_t *output)
{
	*output = 0;

	*output = LUT[*input & LOWEST_NIBBLE_MASK] << 4;
	*output = *output + LUT[ (*input & HIGHEST_NIBBLE_MASK) >> 4 ];
}
