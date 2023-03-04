// to find factorial of a number by using recursion function
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number to find the factorial:  ");
	scanf("%d",&n);
	printf("The factorial of %d  is = %d ",n, fun(n));
	return 0;
}
int fun(int n)
{
	if(n==1)
	{
		return 1;	
	}
	else
	{	
		return n*fun(n-1);
	}
}
