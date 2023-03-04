#include<stdio.h>
#include<string.h>
int main()
{
	char str1[6] = "Anurag";
	char str2[4];
	strcpy(str2,str1);
//	strncpy(str2 , str1, sizeof(str2));
	printf("%s",str2);
	return 0;
}

