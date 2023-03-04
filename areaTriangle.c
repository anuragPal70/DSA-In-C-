#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float s, a,b,c,area;
	printf("Enter the value of a , b and c :");
	scanf("%f %f %f", &a ,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n Area of Triangle is: %f ",area);
	return 0;
}
