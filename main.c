#include<stdio.h>
extern  int var;
int main()
{
	int value;
	value = increment();
	value = increment();
	value = increment();
	printf("%d",value);
	return 0;
}
