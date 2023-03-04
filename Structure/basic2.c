#include<stdio.h>
struct
{
	char *name;
	int age;
	int salery;
}emp1,emp2;

int manager()
{
	struct
{
	char *name;
	int age;
	int salery;
}manager;
	manager.age = 27;
	if(manager.age> 30)
	manager.salery = 65000;
	else
	manager.salery = 55000;
	return manager.salery;
}
int main()
{
	printf("Enter employ one salery: ");
	scanf("%d", &emp1.salery);
	printf("\nEnter employ 2nd salery: ");
	scanf("%d", &emp2.salery);
	printf("\n Employ one salery is %d", emp1.salery);
	printf("\n Employ 2nd salery is %d", emp2.salery);
	printf("\n Managers salery is %d ", manager());
	return 0;
}
