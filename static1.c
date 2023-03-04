#inclide<stdio.h>
int a = 3;
void main()
{
	m(a);
}
void  n(x)
{
	x = x * a;
	printf(x);
}
void m(y)
{
	a =1;
	a = *y-a;
	n(a);
	printf(a);
}
