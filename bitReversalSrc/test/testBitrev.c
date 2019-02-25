
#include "bitrev.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/* Boundary test */
void test_zero_input_gives_zero_output(void)
{
	uint8_t input = 0x00;
	uint8_t output = 0xFF;

    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0x00, output);
}

/* Boundary test */
void test_0xFF_input_gives_0xFF_output(void)
{
	uint8_t input = 0xFF;
	uint8_t output = 0x00;

    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0xFF, output);
}

/* Close to boundary test */
void test_0x01_input_gives_0x80_output(void)
{
	uint8_t input = 0x01;
	uint8_t output = 0x00;

    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0x80, output);
}

/* Close to boundary test */
void test_0xFE_input_gives_0x7F_output(void)
{
	uint8_t input = 0xFE;
	uint8_t output = 0x00;

    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0x7F, output);
}

/* Close to boundary test */
void test_0x7F_input_gives_0xFE_output(void)
{
	uint8_t input = 0x7F;
	uint8_t output = 0x00;

    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0xFE, output);
}

/* Middle of the range test */
void test_0x55_input_gives_0xAA_output(void)
{
	uint8_t input = 0x55;
	uint8_t output = 0x00;

    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0xAA, output);
}

void test_passing_the_output_back_in_gives_the_original_value(void)
{
	uint8_t input = 0x88;
	uint8_t output = 0x00;

    bitReversal(&input, &output);
    input = output;
    bitReversal(&input, &output);
    
    TEST_ASSERT_EQUAL_UINT8(0x88, output);
}
