#include <stdio.h>

int main(void)
{
	signed int s32_sample;
	
	printf("\nEnter signed value:\t");
	scanf("%d", &s32_sample);
	
	if(s32_sample > 0)
	{
		printf("Given number is +ve, Number:%d\n", s32_sample);
	}
	else if(s32_sample < 0)
	{
		printf("Given number is -ve, Number:%d\n", s32_sample);
	}
	else
	{
		printf("Given number is Zero, Number:%d\n", s32_sample);
	}
	
	return 0;
}