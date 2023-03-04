#include<stdio.h>
int main()
{
	int n,rem,result=0, temp;
	printf("Enter any number ");
	scanf("%d",&n);
	temp = n;
	while(n != 0)
	{
		rem = n%10;
		result  = result * 10 + rem;
		n =n/10;	
	}
	if(result == temp){
	printf("The number %d is pelindrome",result);
	}
	else
	printf("The number %d is not palindrome",result);
	return 0;
}
