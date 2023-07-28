#include <stdio.h>

int main(void)
{
	unsigned short a16_sample[4];
	unsigned char ui8_Index;
	
	
	printf("Enter array values:\n");
	
	for ( ui8_Index = 0u; ui8_Index < 4; ui8_Index++)
	{
		printf("Enter Array value for %d index:\n", ui8_Index)
		scanf("%d", &ui8_Index);
	}
	
	for ( ui8_Index = 0u; ui8_Index < 4; ui8_Index++)
	{
		printf("Array value for %d index:\n", ui8_Index)
	}
	return 0u;
	
}