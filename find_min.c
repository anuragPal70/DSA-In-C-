#include<stdio.h>
int *findMid(int a[] , int n)
{
	return &a[n/2];
}
int main()
{
	int a[] = {34,45,4,2,6,89,56,4,7};
	int len = sizeof(a)/sizeof(a[0]);
	int *mid = findMid(a,len);
	printf("Mid of the array is: %d",*mid);
	return 0;
}
