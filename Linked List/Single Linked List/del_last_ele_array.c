#include<stdio.h>
int main()
{
	int i;
	int arr[] = {12,3,55,7,8,97,43,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\nAfter deleting last element in array \n");
	size = size-1;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
