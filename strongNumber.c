#include<stdio.h>
int main()
{
	int n ,i,rem,fact=1,result = 0;
	printf("Enter any number ");
	scanf("%d",&n);
	int  q  = n;
	while(q != 0)
	{
		rem = q%10;
		for(i = 1;i<=rem;i++)
		{
			fact = fact*i;
		}
		result = result+fact;
		fact = 1;
		q = q/10;
	}
	if(result == n)
	printf("The %d is a Strong Number",n);
	else
	printf("The %d is a Not Strong Number",n);
}
