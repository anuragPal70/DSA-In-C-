#include<stdio.h>
#include<stdlib.h>
struct node{ int data;
struct node *link;
};
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
	count_of_node(head);	
	return 0;
}

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
