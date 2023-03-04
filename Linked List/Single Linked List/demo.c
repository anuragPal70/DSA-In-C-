#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("ENter n;");
	scanf("%d", &n);
	int i=0;
	
	for(i=0;i<n;++i)
	{
		if(i%2 != 0)  // Out put 0 , 1, 4, 27, 16 
		{
			printf("%d ",(i*i*i));
		} else
		{
			printf("%d ",i*i);
		}
	}
	
}
