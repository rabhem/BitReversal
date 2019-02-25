#include "bitrev.h"
#include <stdio.h>

int main()
{
	uint8_t input = 0xF1;
	uint8_t output = 0;

    bitReversal(&input, &output);
	
	printf("input :%#0x\n", input);
	printf("output:%#0x\n", output);
	
	return 0;
}
