#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
} *top = NULL;

int isEmpty()
{
	if(top == NULL)
	return 1;
	else
	return 0;
}
int pop()
{
	struct node *temp;
	int val;
	if(isEmpty())
	{
		printf("Stack Underflow \n");
		exit(1);
	}
	temp = top;
	val = temp->data;
	top = top->link;
	free(temp);
	temp = NULL;
	return val;
}
void push(int data)
{
	struct node *newNode = malloc(sizeof(struct node));
	if(newNode == NULL)
	{
		printf("Stack is overflow \n");
		exit(1);
	}
	newNode->data = data;
	newNode->link = NULL;
	
	newNode->link = top;
	top = newNode;
}

int peek()
{

	if(isEmpty())
	{
		printf("Stack Underflow \n");
		exit(1);
	}
	return top->data;
}

void print()
{
	struct node *temp;
	temp = top;
	if(isEmpty())
	{
		printf("Stack Overflow ");
		exit(1);
	}
	printf("The Stack elements are: \n")	;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}
	printf("\n");
}
int main()
{
	push(1);
	push(2);
	push(3);
	print();
	return 0;
}
