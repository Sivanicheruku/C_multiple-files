#include<stdio.h>
int main()
{
	int arr[]={3,4,5,6,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max = findmax(arr,size);
	int min = findmin(arr,size);
	printf("max val:%d\n",max);
	printf("max val:%d\n",max);
	return 0;
}

