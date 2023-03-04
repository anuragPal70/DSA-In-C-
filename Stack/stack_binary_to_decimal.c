#include<stdio.h>
#include<stdlib.h>
#define MAX 100
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
void decToBinary(int n)
{
	while(n != 0)
	{
		push(n%2);
		n = n/2;
	}
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
	while(! isEmpty())
	{
		printf("%d ", pop());
	}
}
 int main()
 {
 	int num;
 	printf("Enter the decimal number to convert into binary: ");
 	scanf("%d",&num);
 	decToBinary(num);
 	print();
 	return 0;
 } 
