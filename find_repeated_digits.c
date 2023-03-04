#include<stdio.h>
int main()
{
	int a[10]={0};
	int rem,i,n;
	printf("Enter any number ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		if(a[rem]==1)
		break;
		a[rem]=1;
		n = n/10;
	}
	if(n>0)
	printf("Yes some digits are repeated ");
	else
	printf("Not repeated any digit  ");
	return 0;
}
