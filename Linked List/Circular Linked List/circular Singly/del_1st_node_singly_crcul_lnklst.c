#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
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
struct node *delFirst(struct node *tail)
{
		if(tail == NULL)
		return tail;
		if(tail->next == tail)
		{
			free(tail);
			tail = NULL;
			return tail;
		}
		struct node *temp = tail->next;
		tail->next = temp->next;
		free(temp);
		temp = NULL;
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
	struct node *tail = NULL;
	tail = createList(tail);
	printf("\n List before deletion: ");
	print(tail);
	tail = delFirst(tail);
	printf("\n List after deletion: ");
	print(tail);
	return 0;
}
