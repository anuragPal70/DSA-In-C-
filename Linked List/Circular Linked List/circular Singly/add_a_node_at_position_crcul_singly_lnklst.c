#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *addToEmpty(int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = temp;
	return temp;
}
struct node *addAtBeg(struct node *tail ,int data)
{
		struct node *newP = malloc(sizeof(struct node));
		newP->data = data;
		newP->next = tail->next;
		tail->next = newP;
		return tail;
}
struct node *addAtEnd(struct node *tail , int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	temp->next = tail->next;
	tail->next = temp;
	tail = tail->next;
	return temp;
}
struct node *addAtPos(struct node *tail, int data , int pos){
	struct node *p = tail->next;
	struct node *temp1 = malloc(sizeof(struct node));
	temp1->data = data;
	temp1->next = NULL;
	while(pos > 1)
	{
		p = p->next;
		pos--;
	}
	temp1->next = p->next;
	p->next = temp1;
	if(p == tail)
	{
		tail = tail->next;
	}
	return tail;
}
 void print(struct node *tail)
 {
 	struct node *p = tail->next;
 	do{
 		printf("%d ", p->data);
 		p = p->next;
 	}while(p != tail->next);
 }
int main()
{
	int pos;
	struct node *tail;    
	tail = addToEmpty(30);	
	tail = addAtBeg(tail, 78);
	tail = addAtBeg(tail, 98);
	tail = addAtEnd(tail, 20);
	tail = addAtEnd(tail, 56);
	print(tail);
	printf("\nEnter the position at which you insert a node \n");
	scanf("%d",&pos);
	tail = addAtPos(tail,97,pos);
	printf("Linked List after add anode in position \n");
	print(tail);
	return 0;
}
