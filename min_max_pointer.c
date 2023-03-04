#include<stdio.h>
void minMax(int arr[] , int len ,int *min ,int *max)
{
	*min = *max = arr[0];
	int i ;
	for(i=1;i<len;i++)
	{
		if(arr[i]> *max)
			*max = arr[i];
		if(arr[i]< *min)
			*min = arr[i];
	}
}
int main()
{
	int a[] = {12,34,56,78,76,45,8,23,53,-9,908,51};
	int len = sizeof(a)/sizeof(a[0]);
	int min ,max;
	minMax(a,len ,&min ,&max);
	printf("The minimum value is %d and Maximum Value is %d ", min ,max);
	return 0;
}
