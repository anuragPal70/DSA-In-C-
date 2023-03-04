#include<stdio.h>
int main()
{
//	int a[]={1,2,3,4,5,6,7,8,9,10};
//	int sum = 0,*p;
//	for(p=&a[0];p<=&a[9];p++)
//		sum += *p;
//	printf("Sum is %d",sum);
//	
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int sum = 0,*p;
	for(p=a;p<=a+9;p++)
		sum += *p;
	printf("\n Sum is %d",sum);
	return 0;
}
