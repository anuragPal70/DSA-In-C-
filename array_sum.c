#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int a[5][5]= {{11,10,37,4,53},
				  {18,2,87,43,58},
				  {16,2,0,4,52},
				  {19,90,39,24,5},
				  {11,2,33,41,56}};
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Row Total: ");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum += a[i][j];
		}
		printf("%d  ",sum);
		sum = 0;
	}
	printf("\n");
	printf("\n Column Total: ");
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			sum += a[i][j];
		}
		printf("%d  ",sum);
		sum = 0;
	}
	return 0;
}
