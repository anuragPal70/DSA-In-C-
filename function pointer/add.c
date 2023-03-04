#include<stdio.h>
#include<string.h>
int add(int a , int b)
{
	return a+b;
}
int main()
{
	int result;
	int (*ptr)(int ,int) = add;
	result = ptr(12,14);
	printf("%d" , result);  
}
