#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *addToEmpty(int data){
	struct node *tail = malloc(sizeof(struct node));
	tail->prev = tail;
	tail->data = data;
	tail->next = tail;
	return tail;
}
struct node *addAtEnd(struct node *tail,int data)
{
	struct node *newP = addToEmpty(data);
	if(tail == NULL){
		return newP;
	}
	else
	{
		struct node *temp = tail->next;
		newP->next = temp;
		newP->prev = temp;
		tail->next = newP;
		temp->prev = newP;
		tail = newP;
		return tail;
	}
}
struct node *addAtPos(struct node *tail, int data, int pos)
{
	struct node *newp = addToEmpty(data);
	if(tail == NULL)
	return newp;
	struct node *temp = tail->next;
	while(pos>1)
	{
		temp = temp->next;
		pos--;
	}
	newp->prev = temp;
	newp->next = temp->next;
	temp->next->prev = newp;
	temp->next = newp;
	if(temp == tail)
	tail = tail->next;
	return tail;
}
void print(struct node *tail)
{
	if(tail == NULL)
	printf("No element in the List \n");
	else
	{
		struct node *temp = tail->next;
		do{
			printf("%d ",temp->data);
			temp = temp->next;
		}while(temp != tail->next);
	}
	printf("\n");
}
int main()
{
	struct node *tail = NULL;
	tail = addToEmpty(10);
	tail = addAtEnd(tail, 20);
	tail = addAtEnd(tail, 40);
	tail = addAtPos(tail,30,2);
	print(tail);
	return 0;
}
