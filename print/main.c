#include <stdio.h>

unsigned int main(void)
{
	char c_sample = 'C';
	signed char s8_sample = -10;
	unsigned char u8_sample = 10;
	signed short s16_sample = -10000;
	unsigned short u16_sample = 10000;
	signed int s32_sample = -100000;
	unsigned int u32_sample = 100000;
	signed long s64_sample = -1000000000;
	unsigned long u64_sample = 1000000000;
	
	float f32_sample = 1.123456789;
	double f64_sample = 1.123456789;

	printf("Char value = %c\n", c_sample);
	printf("signed value 8-bit = %d\n", s8_sample);
	printf("unsigned value 8-bit = %d\n", u8_sample);
	printf("signed value 16-bit = %hd\n", s16_sample);
	printf("unsigned value 16-bit = %hu\n", u16_sample);
	printf("signed value 32-bit = %d\n", s32_sample);
	printf("unsigned value 32-bit = %u\n", u32_sample);
	printf("signed value 64-bit = %ld\n", s64_sample);
	printf("unsigned value 64-bit = %lu\n", u64_sample);
	printf("float value 32-bit = %.4f\n", f32_sample);
	printf("double value 64-bit = %.10lf\n", f64_sample);

	return 0u;
}



