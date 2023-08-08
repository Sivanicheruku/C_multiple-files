#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	number = togglebits(number,3);
	number = togglebits(number,4);
	number = togglebits(number,5);
	printf("result:%d\n",number);
	return 0;
}

