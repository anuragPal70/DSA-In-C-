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
	int choice, data;
	while(1)
 	{
		printf("\n");
		printf("1. push\n");
		printf("2. print all element\n");
		printf("3. Print the top element\n");
		printf("4. Print all the elements of the stack\n");
		printf("5. Exit\n");
		printf("\n"); 
		printf("Please enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the element to be pushed: \n");
				scanf("%d", &data);
				push(data);
				break;
				
			case 2:
				data = pop();
				printf("Deleted element is %d\n", data);
				break;
			case 3:
				printf("The topmost element is: %d\n", peek());
				break;
			case 4:
				print();
				break;
			case 5:
				exit(1);
				break;
			default:
				printf("Wrong Choice \n");
				break;
		}
	}
	return 0;
}
