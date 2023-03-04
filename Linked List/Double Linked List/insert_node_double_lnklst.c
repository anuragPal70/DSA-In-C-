#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *addToEmpty(struct node* head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return  head;
	
}

int main()
{
	struct node* head = NULL;
	head = addToEmpty(head,45);
	printf("%d ", head->data);
	struct node *ptr = NULL;
	ptr = addToEmpty(ptr,30);
	printf("%d ",ptr->data);
	struct node *ptr1 = NULL;
	ptr1 = addToEmpty(ptr,89);
	printf("%d ",ptr1->data);
	return 0;
	
}
