#include<stdio.h>
int main()
{
//	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//	printf("%u %u %u",a+3,*(a+3),*(a+2)+3);

//	int a[5] = {1,2,3,4,5};
//	int (*p)[5] = &a;
//	printf("%d", **p);

	int a[][3] = {1,2,3,4,5,6};
	int(*ptr)[3] = a;
	printf("%d %d \n",(*ptr)[1], (*ptr)[2]);
	++ptr;
	printf("%d %d \n", (*ptr)[1], (*ptr)[2]);
	return 0;
}
