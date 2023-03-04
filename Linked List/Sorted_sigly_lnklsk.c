#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *addToEmpty(int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	return temp;
}
struct node *addAtEnd(struct node *head, int data)
{
	struct node *newP = malloc(sizeof(struct node));
	newP->data = data;
	newP->link = NULL;
	
	struct node *temp = head;
	while(temp->link != NULL)
		temp = temp->link;
		temp->link = newP;
		return head;
}
struct node *insert(struct node *head, int data){
	struct node *temp;
	struct node *newP = malloc(sizeof(struct node));
	newP->data = data;
	newP->link = NULL;
	
	int key = newP->data;
	if(head == NULL || key <head->data)
	{
		newP->link = head;
		head = newP;
	}
	else{
		temp = head;
		while(temp->link != NULL && temp->link->data < key)
		{
			temp = temp->link;
		}
		newP->link = temp->link;
		temp->link = newP;
	}
	return head;
}
void print(struct node *head)
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->link;
	}
	printf("\n");
}
int main()
{
	struct node *head = NULL;
	head = addToEmpty(10);
	head = addAtEnd(head,20);
	head = addAtEnd(head , 40);
	head = insert(head,30);
	head = insert(head,12);
	print(head);
	return 0;
}
