#include<stdio.h>
#include<stdlib.h>
struct node{
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

void push(int data)
{
	struct node *newNode;
	newNode = malloc(sizeof(newNode));
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

int  pop()
{
	struct node *temp;
	int val;
	if(isEmpty())
	{
		printf("Stack is Underflow");
		exit(1);
	}
	temp = top;
	val = temp->data;
	top = top->link;
	free(temp);
 	temp = NULL;
 	return val;
}

int peek()
{
	if(isEmpty())
	{
		printf("Stack is underflow \n");
		exit(1);
	}
	return top->data;
}

void palindrome(char *s)
{
	int i=0;
	while(s[i] != 'X')
	{
		push(s[i]);
		i++;
	}
	i++;
	while(s[i])
	{
		if(isEmpty() || s[i] != pop())
		{
			printf("String is Not Palindrome \n");
			exit(1);
		}
		i++;
	}
	if(isEmpty())
	printf("String is Palindrome \n");
	else
	printf("String is Not Palindrome \n");
}

int main()
{
	char s[100];
	printf("Enter a string: ");
	scanf("%s",s);
	palindrome(s);
	return 0;
}

