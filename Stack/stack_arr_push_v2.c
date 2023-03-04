#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int first = -1;
int isFull()
{
	if(first == MAX -1)
	return 1;
	else
	 return 0;
}
int isEmpty()
{
	if(first == -1)
	return 1;
	else
	return 0;
}
void push(int data)
{
	int i;
	if(isFull())
	{
		printf("Stack Overflow \n");
		exit(1);
	}
	first += 1;
	for(i=first; i>0; i--)
	stack_arr[i] = stack_arr[i-1];
	stack_arr[0] = data;
}
int pop()
{
	int value,i;
	if(isEmpty()){
		printf("Stack Underflow \n");
		exit(1);
	}
	value = stack_arr[0];
	for(i=0; i<first; i++)
	stack_arr[i] = stack_arr[i+1];
	first -= 1;
	return value;
}
int peek()
{
	if(isEmpty())
	{
		printf("Stack Underflow \n");
		exit(1);
	}
	return stack_arr[0];
}
void print()
{
	int i;
	if(first == -1)
	{
		printf("Stack Underflow \n");
		exit(1);
	}
	for(i=0; i<=first; i++)
	printf("%d ",stack_arr[i]);
	printf("\n");
	
}
 int main()
 {
 	int choice ,data;
 	while(1)
 	{
		printf("\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. print the top element\n");
		printf("4. print all element\n");
		printf("5. Exit\n");
		printf("\n"); 
		printf("Please enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed: ");
				scanf("%d",&data);
				push(data);
				break;
				
				case 2:
					data = pop();
					printf("Deleted element is: %d",data);
					break;
					
				case 3:
					printf("The topmost element in stack is %d\n",peek());
					break;
				
				case 4:
					print();
					break;
					
				case 5:
					exit(1);
					break;
				default:
				printf("Wrong Choice\n");		
		}
 	}
 	return 0;
 } 
