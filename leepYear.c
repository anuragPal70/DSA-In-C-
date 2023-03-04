#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year ");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("It is the leep  year \n");
	}
	else if(year%100==0)
	{
		printf("It is not leep  year \n");
	}
	else if(year%4==0)
	{
		printf("It is the leep  year \n");
	}
	else
	printf("It is not leep  year ");
	return 0;	
}
