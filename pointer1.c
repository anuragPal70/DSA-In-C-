#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main() {
	int i=1;
	int *p = &i;
	int 	q=p;
	int *q = 5;
	printf("%d",*p);
	return 0;
}
