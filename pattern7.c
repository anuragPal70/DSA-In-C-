#include<stdio.h>
#define n 5
int main()
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(k=n;k>=i;k--)
			printf(" ");
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			
		printf("\n");
	}
	return 0;
	
}
