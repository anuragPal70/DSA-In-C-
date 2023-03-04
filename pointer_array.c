#include<stdio.h>
int main()
{
	
	int i[]={1,0,7,89,87,6,43,90};
	int *p = &i[3];
	printf("\n%d",*(p--));
	printf("\n%d",*(p--));
	printf("\n%d",*(--p));
	return 0;
}
