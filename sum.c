#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter any two numbers \n");
	scanf("%d %d",&x,&y);
	if(y>=0)
	{
	
	while(y!=0)
	{
		x++;
		y--;
	}
	printf("The  Sum is %d",x);
	}
	else if(y<0)
	{
		while(y!=0)
		{
			x--;
			y++;
		}
		printf("The sum is %d",x);
	}
	return 0;
} 
