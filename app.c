#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	int sum= calculatesum(a,b);
	printf("sum=%d",sum);
	return 0;

}
