#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;

isFull()
{
	if(top == MAX - 1)
	return 1;
	else
	return 0;
}

isEmpty()
{
	if(top == - 1)
	return 1;
	else
	return 0;
}

void push(int data)
{
	if(isFull())
	{
		printf("Stack Overflow\n");
		return;
	}
	top = top + 1;
	stack_arr[top] = data;
	
}
int pop()
{
	int value;
	if(isEmpty())	
	{
		printf("Stack is underflow\n");
		exit(1);
	}
	value = stack_arr[top];
	top = top-1;
	return value;
}

int peek()
{
	if(isEmpty())	
	{
		printf("Stack is underflow\n");
		exit(1);
	}
	return stack_arr[top];
}

void print()
{
	int i;
	if(top == -1)
	{
		printf("Stack underflow\n");
		return;
	}
	for(i=top; i>=0; i--)
	printf("%d ", stack_arr[i]);
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
