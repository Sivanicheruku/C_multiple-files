#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string");
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str) -1]=='\n')
	{
		str[strlen(str) -1]='\0';
	}
	upper_case(str);
	printf("upper case string:%s",str);
	return 0;
}
