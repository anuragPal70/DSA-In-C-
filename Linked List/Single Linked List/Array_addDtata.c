//when array is full

#include<stdio.h>
#include<stdlib.h>
int add_end_array(int a[],int b[], int n, int lastPos , int data)
{
	int i;
	for(i=0;i<n;i++)
	b[i]= a[i];
	b[lastPos] = data;
	lastPos++;
	return lastPos;
}
 int main()
 {
 	int a[3];
 	int i,n,lastPos;
 	printf("Enter the number of elements \n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 		scanf("%d ",&a[i]);
 		int size = sizeof(a)/sizeof(a[0]);
 	lastPos = n;
 	if(n == size)
 	{
 		int b[size +2];
 		lastPos = add_end_array(a , b, size ,lastPos,20);
 		for(i=0;i<lastPos;i++)
 		printf("%d ",b[i]);
 	}
 	return 0;	
 }
