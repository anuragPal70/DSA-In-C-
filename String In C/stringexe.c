#include<stdio.h>
#include<string.h>
int main()
{
	char str1[5], str2[100];
	strcpy(str1 , "He");
	strcpy(str2 , "llo ");
	strncpy(str1 , str2, 3);
	printf("%s",str1);
	return 0;
}
