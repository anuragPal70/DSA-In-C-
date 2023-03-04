#include<stdio.h>
int main()
{
	int n=1,row,i,j;
	printf("Enter the number of rows:  ");
	scanf("%d",&row);
	printf("\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
