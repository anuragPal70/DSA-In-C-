#include<stdio.h>
int add_beg(int arr[] , int n , int d)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0] = d;
	return n+1;
}
int main()
{
	int arr[10];
	int i , n, data=10;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	printf("Enter all elements of array: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	n = add_beg(arr , n ,data);
	for(i=0;i<n;i++)
	printf("%d ", arr[i]);
	return 0;
}
