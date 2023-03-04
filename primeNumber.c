#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,num1,num2,count=0;
	printf("Enter any number \n ");
	scanf("%d",&x);
	num1 = ceil(sqrt(x));
	num2 = x;
	for(i=2;i<=num1;i++)
	{
		if(num2%i==0)
		count=1;
	}
	if((count == 0 && num2 !=1) || num2 == 2 || num2 ==3)
	printf("%d is Prime Number",num2);
	else
	printf("%d is not a prime number ",num2);
	return 0;
}
