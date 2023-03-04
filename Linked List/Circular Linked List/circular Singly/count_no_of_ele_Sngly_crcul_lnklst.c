#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *addToEmpty(int data)
{
	struct node *t = malloc(sizeof(struct node));
	t->data = data;
	t->next = t;
	return t;
}
struct node *addAtEnd(struct node *tail , int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	temp->next = tail->next;
	tail->next = temp;
	tail = tail->next;
	return tail;
}
void countElement(struct node *tail){
	int count = 0;
	struct node *temp = tail->next;
	while(temp != tail){
		count++;
		temp = temp->next;
	}
	count++;
	printf("Total number of elements are  %d in the list.",count);
}
int main()
{
	struct node *tail = NULL;
	tail = addToEmpty(10);
	tail = addAtEnd(tail, 20);
	tail = addAtEnd(tail, 30);
	tail = addAtEnd(tail, 40);
	countElement(tail);
	return 0;
}
