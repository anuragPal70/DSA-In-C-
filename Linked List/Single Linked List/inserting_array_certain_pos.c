// Most Important Program --------
#include<stdio.h>
void add_at_pos(int arr[],int arr2[],int n, int data , int pos)
{
	int i;
	int index = pos-1;
	for(i=0;i<=index-1;i++)
	arr2[i] = arr[i];
	
	arr2[index] = data;
	int j;
	for(i=index+1, j= index; i<n+1,j<n;i++,j++)
	arr2[i] = arr[j];
}
int main()
{
	int arr[] = {23,45,67,54,23,41,89,87};
	int pos,i,data;
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Before inserting data the array is \n");
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\nEnter the Position and data you want to update \n");
	scanf("%d %d", &pos, &data);
	int arr2[size+1];
	add_at_pos(arr,arr2,size,data,pos);
	printf("After inserting data the array is---  \n");
	for(i=0;i<size+1;i++)
	printf("%d ", arr2[i]);
	return 0;
}
