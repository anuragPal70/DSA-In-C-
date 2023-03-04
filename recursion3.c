// This run for infinite time
#include<stdio.h>
int f(int j);
int main()
{
	f(50);
}
int f(int n)
{
	static int i=50;
	int k;
	if(i == n)
	{
		printf("Something");
		k = f(i);
		return 0;
	}
	else 
	return 0;
}
