#include<stdio.h>
int main()
{
	int a[9]={34,56,54,67,89,98,90,23,10};
	int i;
	printf("Original Number ");
	for(i=0;i<=8;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	printf("Reverse number  ");
	for(i=8;i>=0;i--)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
