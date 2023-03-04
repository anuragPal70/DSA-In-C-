#include<stdio.h>
#include<string.h>
int main()
{
	char *fruits[] = {"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
	if(strcmp(fruits[1],fruits[2]) < 0)
	printf("%s is lasser than %s", fruits[1],fruits[2]);
	else if(fruits[1]>fruits[2])
	printf("%s is grater than %s",fruits[1],fruits[2]);
	return 0;
}
