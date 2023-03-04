#include<stdio.h>
#include<stdlib.h>
struct node{ int data;
struct node *link;
};
void count_of_node(struct node *head)
{
	int count=0;
	if(head == NULL)
	printf("The Linked List is empty \n");
	struct node *ptr = NULL;
	ptr = head;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->data );
		count++;
		ptr = ptr->link;
	}
	printf("\nToal Nodes are = %d", count);
}

void add_at_end(struct node *head , int data)
{
	struct node *ptr , *temp;
	ptr = head;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}
int main()
{
	struct node * head = malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;
	
	struct node *current =  malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
	head->link = current;
	
	current = malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;
	head->link->link = current;
	
	current = malloc(sizeof(struct node));
	current->data = 40;
	current->link = NULL;
	head->link->link->link = current;
	add_at_end(head , 50);
	count_of_node(head);	
	
	return 0;
}


