#include<stdio.h>
int del_first(int arr[] , int n)
{
	int i;
	if(n == 0)
	{
		printf("Array is empty \n");
		return n;
	}
		 for(i=0;i<n-1;i++)
		 
		 	arr[i] = arr[i+1];
		 
		 return n-1;
	
}
int main()
{
	int arr[10];
	int i , n;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	n = del_first(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
