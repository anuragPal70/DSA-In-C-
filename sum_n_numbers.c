#include<stdio.h>
int main()
{
	int sum=0,i ,n ;
	printf("Enter any number \n ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("Sum of total n numbers are: %d", sum);
	return 0;
	
}
