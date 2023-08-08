#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	if(str[strlen(str) - 1]=='\n')
	{
		str[strlen(str) - 1]='\0';
	}
	int length = findstringlen(str);
	printf("length of the string:%d\n", length);
	return 0;
}
