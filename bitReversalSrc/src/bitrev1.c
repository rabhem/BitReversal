/* Bit reversal exercise */
/* By R A Hemesley, 2019 */

#include "bitrev.h"

/*
 * @brief Reverses the bits in the uint8_t input variable. 
 * 
 * The input remains unchanged. The bit-reversed input is placed into 
 * the output variable. 
 * 
 * This implementation simply loops through the input variable, masking 
 * one bit at a time and if it is a binary '1', then it shifts a '1' 
 * into the appropriate position within the output variable. 
 * 
 * @param[in] uint8_t *input - a pointer to the input variable. 
 * @param[out] uint8_t *output - a pointer to the output variable. 
 */
void bitReversal(uint8_t *input, uint8_t *output)
{
	uint8_t bitmask = 0x01;
	int8_t c = 0;
	*output = 0;
	
	for(c=7; c >= 0; c--)
	{
		if(*input & bitmask)
		{
			*output += (0x01 << c);
		}

		bitmask = bitmask << 1;
	}
}

