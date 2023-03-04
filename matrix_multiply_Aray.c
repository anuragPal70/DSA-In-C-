#include<stdio.h>
#define A = 50
int main()
{
	int a[A][A], b[A][A], product[A][A];
	int arows,acolumns,brows,bcolumns;
	int i,j,k;
	int sum=0;


	printf("Enter the rows and columns of a: ");
	scanf("%d %d",&arows,&acolumns);
	printf("Enter the elements of a: ");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the of rows and columns of b: ");
	scanf("%d %d",&brows,&bcolumns);
	
	if(brows != acolumns)
	{
		printf("Sorry! We can not multiply matrix a and b: ");
	}
	else
	{
	printf("Enter the elements of matrix2: ");
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
}
	printf("\n ");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			for(k=0;k<brows;k++)
			{
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
	}
	printf("\n Resultant matrix:  ");
	for(i=0;i<arows;i++)
	{
		for(j=0;i<bcolumns;j++)
		{
			printf("%d", product[i][j]);
		}
		printf("\n");
	}
	return 0;
}
