#include<stdio.h>
int main()
{
	
	int i[]={1,2,3,4,5,6};
	int *p = &i[3];
	int *q = &i[5];
	printf("%d\n",p<=q);	
	printf("%d\n",p>=q);
	q = &i[3];
	printf("%d\n",p==q);
	return 0;
}
