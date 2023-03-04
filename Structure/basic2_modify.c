#include<stdio.h>
struct employ
{
	char *name;
	int age;
	int salery;
};

int manager()
{
	struct employ manager;
	manager.age = 27;
	if(manager.age> 30)
	manager.salery = 65000;
	else
	manager.salery = 55000;
	return manager.salery;
}
int main()
{
	struct employ emp1;
	struct employ emp2;
	printf("Enter employ one salery: ");
	scanf("%d", &emp1.salery);
	printf("\nEnter employ 2nd salery: ");
	scanf("%d", &emp2.salery);
	printf("\n Employ one salery is %d", emp1.salery);
	printf("\n Employ 2nd salery is %d", emp2.salery);
	printf("\n Managers salery is %d ", manager());
	return 0;
}
