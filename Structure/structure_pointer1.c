#include<stdio.h>
struct abc{
	int x ;
	int y ;
};
 int main()
 {
 	struct abc s = { 0 , 1};
 	struct abc *ptr = &s;
 	printf("%d %d %d %d", ptr->x, (*ptr).y , (*&s).x ,s.y);
	return 0;
 }
