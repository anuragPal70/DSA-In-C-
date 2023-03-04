// To find the address of a variable in memory 
#include<stdio.h>
	int main()
	{
	 int i=80;
	 int j = 30;
	 int *p = &j;
	 int *q = &i;
		printf(" %p \n",p);		
		printf(" %p \n",q);
		return 0;
	}
	
	
