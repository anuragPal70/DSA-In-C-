// Delete the last node in the Linked List Using Two Pointer  -----
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void del_pos(struct node **head, int position){
	struct node *current = *head;
	struct node *previous = *head;
	if(*head == NULL)
	printf("List is already empty \n");
	else if(position == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while(position != 1)
	{
		previous = current;
		current = current->link;
		position--;
	}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
} 
int main()
{
	
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;
	
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 20;
	ptr->link = NULL;
	head->link = ptr;
	
	struct node *ptr1 = malloc(sizeof(struct node));
	ptr1->data = 67;
	ptr1->link = NULL;
	head->link->link = ptr1;
	
	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2->data = 70;
	ptr2->link = NULL;
	head->link->link->link = ptr2;
	
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	
	printf("\nAfter Updating node in linkedlist \n");
	int pos=2;
    del_pos(&head,pos);
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	return 0;
}
	
