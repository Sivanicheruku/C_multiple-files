#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3,number;
	printf("Enter the number");
	scanf("%d",&number);
	for(int i=2;i<number;++i)
	{
	
	        f1=f2;
		f2=f3;	
		f3=f1+f2;
		printf("f3=%d",f3);
	}
	return 0;
}
