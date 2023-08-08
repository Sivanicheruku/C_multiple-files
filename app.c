#include<stdio.h>
void binary_demo()
{
	unsigned num;
	unsigned bitmask;
	unsigned result;
	printf("Enter the number");
	scanf("%u",&num);
	int i=31;
	while(i>=0)
	{
		bitmask = 1<<i;
		result=num&bitmask;
		if(result == 0)
		
			printf("0");
		
		else
		
			printf("1");
			i--;
		
	}
}
