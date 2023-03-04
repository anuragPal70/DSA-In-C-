#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *addToEmpty(struct node *head, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	head = temp;
	return head;
}
struct node *addAtEnd(struct node *head, int data)
{
	struct node *temp,*tp;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	tp = head;
	while(tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return head;
}
struct node *delFirst(struct node *head)
{
	struct node *temp = head;
	head = head->next;
	free(temp);
	head->prev = NULL;
	return head;
}
void print(struct node *head)
{
	struct node *ptr = head;
	while(ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}
int main()
{
	struct node *head = NULL;
	struct node *ptr;
	head = addToEmpty(head,20);
	head = addAtEnd(head,67);
	head = addAtEnd(head,87);
	printf("Doubly Link List beafore Deletion: \n");
	print(head);
	head = delFirst(head);
	printf("Doubly Link List after deletion: \n");
	print(head);
	return 0;
}
