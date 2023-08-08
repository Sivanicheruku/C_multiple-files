#include<stdio.h>
#include<string.h>
void revstr(char str[])
{
	int i,j;
	char temp;
	int length = strlen(str);
	for(i=0;j=length-1;i<j,i++,j--){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

