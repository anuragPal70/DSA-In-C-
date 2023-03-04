#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *del_list(struct node *head)
{
	struct node *temp = head;
	while(temp!=NULL)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
	return head;
}
 int main()
 {
 	struct node *head = (struct node*)malloc(sizeof(struct node));	
 	head->data = 10;
 	head->link= NULL;
 	
 	struct node *ptr = malloc(sizeof(struct node));
 	ptr->data = 20;
 	ptr->link = NULL;
 	head->link = ptr;
 	
 	struct node *ptr1 = malloc(sizeof(struct node));
 	ptr1->data = 30;
 	ptr1->link = NULL;
 	head->link->link = ptr1;
 	
 	struct node *ptr2 = malloc(sizeof(struct node));
 	ptr2->data = 40;
 	ptr2->link = NULL;
 	head->link->link->link = ptr2;
 	
 	ptr = head;
 	while(ptr != NULL)
 	{
 		printf("%d ", ptr->data);
 		ptr = ptr->link;
 	}
 	
 	head = del_list(head);
 	if(head == NULL)
 	printf("\nLinked List is deleted successfully! \n");
 	return 0;
 	
 }
