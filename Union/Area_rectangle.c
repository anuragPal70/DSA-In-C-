#include<stdio.h>
struct point{
	int x;
	int y;
};
struct rectangle{
	struct point upper_left;
	struct point lower_right;
};
int area(struct rectangle r)
{
	int lenght , breadth;
	lenght = r.lower_right.x - r.upper_left.x;
	breadth =r.upper_left.y - r.lower_right.y;
	return lenght*breadth;
}
 int main()
 {
 	struct rectangle r;
 	printf("Enter the upper left coordinates of the rectangle: ");
 	scanf("%d %d", &r.upper_left.x, &r.upper_left.y);
 	printf("Enter the lower right coordinates of rectangle: ");
 	scanf("%d %d", &r.lower_right.x, &r.lower_right.y);
 	printf("\n Area of rectangle is: %d", area(r));
 	return 0;
 }
