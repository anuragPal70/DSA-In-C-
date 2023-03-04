#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,result;
	printf("Enter any number of terms ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		result= a+b;
		a = b;
		b= result;
	}
	return 0;
}
