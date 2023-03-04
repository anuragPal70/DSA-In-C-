#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
} *top = NULL;

int isEmpty(struct node **top)
{
	if(*top == NULL)
	return 1;
	else
	return 0;
}
int  pop(struct node **top)
{
	struct node *temp;
	int val;
	if(isEmpty(top))
	{
		printf("Stack is Underflow");
		exit(1);
	}
	temp = *top;
	val = temp->data;
	*top = (*top)->link;
	free(temp);
 	temp = NULL;
 	return val;
}
void push(int data, struct node **top1)
{
	struct node *newNode = malloc(sizeof(struct node));
	if(newNode == NULL)
	{
		printf("Stack is overflow \n");
		exit(1);
	}
	newNode->data = data;
	newNode->link = NULL;
	
	newNode->link = *top1;
	*top1 = newNode;

}

void reverse_stack(struct node **top)
{
	struct node *top1 = NULL;
	struct node *top2 = NULL;
	while(*top != NULL)
	{
		push(pop(top),&top1);
	}
	while(top1 != NULL)
	{
		push(pop(&top1),&top2);
	}
	while(top2 != NULL)
	{
		push(pop(&top2),top);
	}
	
}

void print(struct node **top)
{
	struct node *temp;
	temp = *top;
	if(isEmpty(top))
	{
		printf("Stack Underflow \n");
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
	int data,choice;
	struct node *top = NULL;
	while(1)
	{
	printf("1. Push\n");
	printf("2. print\n");
	printf("3. Reverse the stack\n");
	printf("4. Quit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the element to be pushed \n");
			scanf("%d", &data);
			push(data, &top);
			break;
		
		case 2:
			print(&top);
			break;
		case 3:
			reverse_stack(&top);	
			printf("Stack is Reversed \n");
			break;
		case 4:
			exit(1);
		default:
			printf("Wrong Choice ");
	}
}
	return 0;
}


