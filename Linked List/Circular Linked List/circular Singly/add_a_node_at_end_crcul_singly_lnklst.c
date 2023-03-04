#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data ;
	struct node *next;
};

struct node *addToEmpty( int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = temp;
	return temp;
}
struct node *addAtBeg(struct node *tail , int data){
	struct node *newP = malloc(sizeof(struct node));
	newP->data = data;
	newP->next = tail->next;
	tail->next = newP;
	return tail;
}
void print(struct node *tail)
{
	struct node *ptr=tail->next;
	do{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}while(ptr != tail->next);
}
struct node *addAtEnd(struct node *tail,int data)
{
	struct node *newP = malloc(sizeof(struct node));	
	newP->data = data;
	newP->next = NULL;
	newP->next  = tail->next;
	tail->next = newP;
	tail = tail->next;
	return tail;
}
int main()
{
	struct node *tail;    
	tail = addToEmpty(30);	
	tail = addAtBeg(tail, 78);
	tail = addAtBeg(tail, 98);
	tail = addAtEnd(tail, 20);
	tail = addAtEnd(tail, 56);
	print(tail);
	return 0;
}
