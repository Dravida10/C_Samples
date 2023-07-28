#include <stdio.h>

int main(void)
{
	unsigned int u32_sample;
	unsigned int u32_limit;
	
	printf("\nunsigned value 32-bit:\t");
	scanf("%u", &u32_sample);
	
	u32_limit = sizeof(u32_sample) / 2u;
	printf("\nAvg. value: %u", u32_limit);
	
	printf("\nNumber sequence until avg. limit:");
	
	while(u32_sample != u32_limit)
	{
		printf("\ncount: %u", u32_sample);
		if(u32_sample < u32_limit)
			u32_sample++;
		else
			u32_sample--;
	}
	
	return 0;
}
