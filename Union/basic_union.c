#include<stdio.h>
union Anu{
	int a;
	char b;
};
int main()
{
	union Anu var;
	var.a = 67;
//	var.b = 'A';
	union Anu *p = &var;
	printf("%d  %c", p->a, p->b);
	return 0;
}
