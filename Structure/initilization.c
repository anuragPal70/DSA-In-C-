#include<stdio.h>
struct abc{
	int age;
	char *name;
	int x;
};
int main()
{
	struct abc a = { 20,"Anurag",25};
	printf(" %d %s %d", a.age, a.name,a.x);
	struct abc b = {.name = "Annanya",.age = 21, .x = 10 };
	printf("\n %s %d %d", b.name , b.age , b.x);
	return 0;
}
