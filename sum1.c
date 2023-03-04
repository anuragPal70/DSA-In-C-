// Sum of two number by using half adder logic
#include<stdio.h>
int main()
{
	int a,b,sum,carry;
	printf("Enter any two number ");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		sum = a^b;
		carry = (a&b)<<1;
		a = sum;
		b = carry;
	}
	printf("The sum id %d ", a);
	return 0;
}
