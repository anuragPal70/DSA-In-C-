// Delete the last node in the Linked List Using only one Pointer  -----
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
void del_last(struct node *head){
	if(head == NULL)
	printf("List is already empty \n");
	else if(head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		struct node *temp = head;
		while(temp->link->link != NULL)
		{
			temp = temp->link;
		}	
		free(temp->link);
		temp->link  = NULL;
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
	printf("\nAfter deleting first node in linkedlist \n");
    del_last(head);
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	return 0;
}

