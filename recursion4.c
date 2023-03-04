#include<stdio.h>
int fun(int i);
int main()
{
	printf("%d", fun(5));
}
int fun(int i)
{
	int x=1,k;
	if(i==1) return k;
	for(k=1;k<i;++k)
	x = x + fun(k) * fun(i-k);
	return x;
	
}
