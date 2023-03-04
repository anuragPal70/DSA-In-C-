#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *next;
	int data;
};

struct node *addToEmpty(int data)
{
	struct node *p = malloc(sizeof(struct node));
	p->data = data;
	p->next = p;
	return p;
}
struct node *addAtEnd(struct node *tail, int data){
	struct node *newP = malloc(sizeof(struct node));
	newP->data = data;
	newP->next = NULL;
	newP->next = tail->next;
	tail->next = newP;
	tail = tail->next;
	return tail;
}
struct node *createList(struct node *tail){
	int i, n ,data;
	printf("Enter the number of nodes: ");
	scanf("%d", &n);
	if(n == 0)
	return tail;
	printf("\nEnter the data of node 1: ");
	scanf("%d", &data);
	tail = addToEmpty(data);
	for(i=1;i<n;i++)
	{
		printf("Enter the data of node %d: ", i+1);
		scanf("%d",&data);
		tail = addAtEnd(tail , data);
	}
	return tail;

}
struct node *delAtPos(struct node *tail, int pos)
{
		if(tail == NULL)
		return tail;
		struct node *temp = tail->next;
		if(tail->next == tail)
		{
			free(tail);
			tail = NULL;
			return tail;
		}
		while( pos > 2)
		{
			temp = temp->next;
			pos--;
		}
		struct node *temp2 = temp->next;
		temp->next = temp2->next;
		if(temp2 == tail)
		tail = temp;
		free(temp2);
		temp2 = NULL;
		return tail;
}
void print(struct node *tail)
{ 
	if(tail == NULL)
	printf("No node in the list");
	else
	{
	struct node *ptr=tail->next;
	
	do{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}while(ptr != tail->next);
	}
	printf("\n");
}
int main()
{                                                         
	int pos;
	struct node *tail = NULL;
	tail = createList(tail);
	printf("\n List before deletion: ");
	print(tail);
	printf("Enter the position of node you want to delete: ");
	scanf("%d", &pos);
	tail = delAtPos(tail,pos);
	printf("\n List after deletion: ");
	print(tail);
	return 0;
}
