#include<stdio.h>
#include<string.h>
void splitstring()
{
	char str[100];
	printf("Enter the name::");
	gets(str);
	char *token=strtok(str," ");

	while(token!=NULL)
	{

		printf("%s",token);
		token = strtok(NULL," ");
		if(token!=NULL)
		{
			printf(",");
		}
	}

}
