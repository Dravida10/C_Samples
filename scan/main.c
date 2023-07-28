#include <stdio.h>

void main(void)
{
	char c_sample;
	signed char s8_sample;
	unsigned char u8_sample;
	signed short s16_sample;
	unsigned short u16_sample;
	signed int s32_sample;
	unsigned int u32_sample;
	signed long s64_sample;
	unsigned long u64_sample;
	float f32_sample;
	double f64_sample;

	printf("\nEnter Char:\t");
	scanf("%c", &c_sample);
	
	printf("\nsigned value 8-bit:\t");
	scanf("%d", &s8_sample);
	
	printf("\nunsigned value 8-bit:\t");
	scanf("%d", &u8_sample);
	
	printf("\nsigned value 16-bit:\t");
	scanf("%hd", &s16_sample);
	
	printf("\nunsigned value 16-bit:\t");
	scanf("%hu", &u16_sample);
	
	printf("\nsigned value 32-bit:\t");
	scanf("%d", &s32_sample);
	
	printf("\nunsigned value 32-bit:\t");
	scanf("%u", &u32_sample);
	
	printf("\nunsigned value 64-bit:\t");
	scanf("%ld", &s64_sample);
	
	printf("\nunsigned value 64-bit:\t");
	scanf("%lu", &u64_sample);
	
	printf("\nfloat value 32-bit:\t");
	scanf("%f", &f32_sample);
	
	printf("\nunsigned value 64-bit:\t");
	scanf("%lf", &f64_sample);


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

}
