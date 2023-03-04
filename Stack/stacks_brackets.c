#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int top = -1;
char stack[MAX];
void push(char);
char pop();
int isEmpty();
int isFull();
int check_balanced(char*);
int match_char(char , char);

int main()
{
	char expr[MAX];
	int balanced;
	printf("Enter the algebric expression \n");
	gets(expr);
	
	balanced = check_balanced(expr);
	if(balanced == 1)
	printf("The expression is valid \n");
	else
	printf("The Expression is not valid \n");
	
	return 0;
}

int check_balanced(char *s)
{
	char temp;
	int i;
	for(i=0; i<strlen(s); i++)
	{
		if(s[i] == '[' || s[i] == '{' || s[i] == '(' || s[i] == '<')
		push(s[i]);
		
		if(s[i] == ']' || s[i] == '}' || s[i] == ')' || s[i] == '>')
		{
			if(isEmpty())
			{
				printf("Right brackets are more then left. \n");
				return 0;
			}
			else
			{
				temp = pop();
				if(! match_char(temp, s[i]))
				{
					printf("Mismatched Brackets. \n");
					return 0;
				}
			}
		}
	}
	if(isEmpty())
	{
		printf("Brackets are well balanced. \n");
		return 1;
	}
	else
	{
		printf("Left brackets are more then right. \n");
		return 0;
	}
}

void push(char c)
{
	if(isFull())
	{
		printf("Stack is overflow. \n");
		exit(1);
	}
	top++;
	stack[top] = c;
}

char pop()
{
	char c;
	if(isEmpty())
	{
		printf("Stack is Underflow. \n");
		exit(1);
	}
	c = stack[top];
	top--;
	return c;
}

int isEmpty()
{
	if(top == -1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(top == MAX-1)
	return 1;
	else
	return 0;
}

int match_char(char a, char b)
{
	if(a == '[' && b == ']')
	return 1;
	if(a == '{' && b == '}')
	return 1;
	if(a == '(' && b == ')')
	return 1;
	if(a == '<' && b == '>')
	return 1;
	return 0;
}
