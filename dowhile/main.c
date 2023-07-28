#include <stdio.h>

int main(void)
{
	unsigned int u32_sample;
	
	printf("\nunsigned value 32-bit:\t");
	scanf("%u", &u32_sample);
	
	do
	{
		printf("\nCount down: %d", u32_sample);
		u32_sample--;
	}while(u32_sample > 0);
	
	printf("\n");
	
	return 0;
}