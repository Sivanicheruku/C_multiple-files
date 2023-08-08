#include<stdio.h>
void multiply()
{
	unsigned int num;
	printf("Enter the number to multiply with 7:\n");
	scanf("%u",&num);
	printf("the multiplication with 7 is %d\n",((num<<3)-num));
}
