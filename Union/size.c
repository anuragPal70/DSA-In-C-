#include<stdio.h>

union xyz{
	int a;
	char b;
	double c;
	float d;
};
 int main()
 {
 	printf("%ld", sizeof(union xyz));
 	return 0;
 }
