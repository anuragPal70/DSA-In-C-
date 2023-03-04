#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
} *top = NULL;

int isEmpty(struct node *top)
{
	if(top == NULL)
	return 1;
	else
	return 0;
}
struct node *pop(struct node *top)
{
	struct node *temp;
	if(isEmpty(top))
	{
		printf("Stack Underflow \n");
		exit(1);
	}
	temp = top;
	top = top->link;
	return temp;
}
struct node *push(int data, struct node *top)
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
	return top;
}

int peek()
{

	if(isEmpty(top))
	{
		printf("Stack Underflow \n");
		exit(1);
	}
	return top->data;
}

void print(struct node *top)
{
	struct node *temp;
	temp = top;
	if(isEmpty(top))
	{
		printf("Stack Underflow ");
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
	struct node *temp;
	struct node *top = NULL;
	struct node *top1 = NULL;
	struct node *top2 = NULL;
	
	top = push(1,top);
	top = push(2,top);
	top = push(3,top);
	top = push(4,top);
	print(top);
	temp = pop(top);
	top = temp->link;
	top1 = push(temp->data,top1);
	temp = pop(top);
	top = temp->link;
	top1 = push(temp->data,top1);
	print(top);
	print(top1);
	return 0;
}


