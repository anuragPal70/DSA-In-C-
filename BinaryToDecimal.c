#include<stdio.h>
int main()
{
	int rem,binary,num,decimal=0,weight=1;
	printf("Enter the binary number:  ");
	scanf("%d",&binary);
	num=binary;
	while(binary!=0)
	{
		rem = binary%10;
		decimal = decimal+rem*weight;
		binary = binary/10;
		weight = weight*2;
		
	}
	printf("The decimal equivalant of the binary number %d is = %d",num,decimal);
	return 0;
}
