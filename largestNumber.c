#include<stdio.h>
int main()
{
	int large,x1,x2,x3;
	printf("Enter any three numbers: ");
	scanf("%d %d %d",&x1,&x2,&x3);
	large = x1>x2?(x1>x3?x1:x3):(x2>x3?x2:x3);
	printf("The largest number is %d",large);
	return 0;
}
