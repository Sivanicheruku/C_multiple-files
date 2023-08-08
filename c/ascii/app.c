#include<stdio.h>
void character_demo()
{
	int i=0;
	char s[10]="INDIA";
	while(s[i] != '\0')
	{
	printf("ascii value of %c = %d\n",s[i],s[i]);
	i++;
	}
}
