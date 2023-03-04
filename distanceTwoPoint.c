#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float distance;
	printf("\nEnter the x and y coordinets of the first point: ");
	scanf("%d %d", &x1,&y1);
	printf("\n Enter the x and y coordinets of the second point: ");
	scanf("%d %d",&x2 , &y2);
	distance  = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("Distance between two points are: %f",distance);
	return 0;
}
