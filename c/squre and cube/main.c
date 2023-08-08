#include<stdio.h>
#include"header.h"
int main()
{
	int a,b;
	printf("Enter the value:");
	scanf("%d",&a);
	printf("Enter the b value:");
	scanf("%d",&b);
	printf("squre=%d\n",square(a));
	printf("cube=%d\n",cube(b));
}
