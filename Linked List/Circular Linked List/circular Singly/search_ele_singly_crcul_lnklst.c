#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *addToEmpty(int data)
{
	struct node *tail = malloc(sizeof(struct node ));
	tail->data = data;
	tail->next = tail;
	return tail;
}

struct node *addAtEnd(struct node *tail, int data)
{
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
int searchElement(struct node *tail,int element)
{
	int index = 0;
	struct node *temp;
	if(tail == NULL)
	return -2;
	temp = tail->next;
	do{
		if(temp->data == element)
		return index;
		temp = temp->next;
		index++;
	}while(temp != tail->next);
	return -1;
}
int main()
{
	int element;
	struct node *tail = NULL;
	tail = createList(tail);
	printf("Enter the element you want to search: ");
	scanf("%d",&element);
	int index = searchElement(tail, element);
	if(index == -1)
	printf("Element not found");
	else if(index == -2)
	printf("Linked list is empty");
	else
	printf("Element %d is at index %d", element , index);
	return 0;
}
