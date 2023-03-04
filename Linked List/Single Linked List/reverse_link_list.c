#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *reverse(struct node *head)
{
	struct node *prev = NULL;
	struct node *next = NULL;
	while(head != NULL)
	{
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
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
 	
 	struct node *ptr3 = malloc(sizeof(struct node));
 	ptr3->data = 50;
 	ptr3->link = NULL;
 	head->link->link->link->link = ptr3;
 	
 	ptr = head;
 	while(ptr != NULL)
 	{
 		printf("%d ", ptr->data);
 		ptr = ptr->link;
 	}
 	
 	printf("\n Linked List after Reverse is as: \n");
 	head = reverse(head);
 	ptr = head;
 	while(ptr != NULL)
 	{
 		printf("%d ", ptr->data);
 		ptr = ptr->link;
 	}
  	return 0;
 	
 }
