//when array is not full

#include<stdio.h>
#include<stdlib.h>
int add_end_array(int a[],int lastPos , int data)
{
	a[lastPos] = data;
	lastPos++;
	return lastPos;
}
 int main()
 {
 	int a[10];
 	int i,n,lastPos;
 	printf("Enter the number of elements \n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 		scanf("%d ",&a[i]);
 	lastPos = n;
 	lastPos = add_end_array(a , lastPos,20);
 	for(i=0;i<lastPos;i++)
 	
 		printf("%d ",a[i]);
 	
 	return 0;	
 }
