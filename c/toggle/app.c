#include<stdio.h>
int togglebits(int num,int pos)
{
	int mask = 1<<pos;
	return num ^ mask;
}
