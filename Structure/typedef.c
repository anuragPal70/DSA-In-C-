#include<stdio.h>
typedef struct car{
	 char *name;
	 int tyer;
}Anucar;
int main()
{
	Anucar c1;
	c1.name = "Lamborgini";	
	printf("%s",c1.name);
}
