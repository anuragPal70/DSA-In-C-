#include<stdio.h>
#include<string.h>
int main()
{
//	char p[20];
//	char *s = "String";
//	int length = strlen(s);
//	int i;
//	for(i=0;i<length;i++)
//	{
//		p[i] = s[length-i];
//	}	
//	printf("%s",p);

	char c[] = "GATE2011"; 
	char *p = c;
	printf("%s",p+p[3]-p[1]);
	return 0;
}
