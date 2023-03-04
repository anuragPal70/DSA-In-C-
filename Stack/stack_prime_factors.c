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
void prime_fact(int num)
{
	int i=2;
	while(num != 1)
	{
		while(num%i == 0)
		{
			push(i);
			num = num/i;
		}
		i++;
	}
	printf("Prime factors of the number are as: \n");
	while(top != -1)
	{
		printf("%d ", pop());
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
	for(i=top; i>=0; i--)
	printf("%d ", stack_arr[i]);
	printf("\n");
}
 int main()
 {
 	int num;
 	printf("Enter a number to find prime factoirs: ");
 	scanf("%d",&num);
 	prime_fact(num);
 	return 0;
 } 
