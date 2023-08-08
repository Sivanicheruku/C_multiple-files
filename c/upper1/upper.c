#include<stdio.h>
#include<ctype.h>
void upper_case(char *str)
{

	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}
