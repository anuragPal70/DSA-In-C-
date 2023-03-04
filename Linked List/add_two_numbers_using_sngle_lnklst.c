#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *push(struct node *head ,int val)
{
	struct node *newP = malloc(sizeof(struct node));
	newP->data = val;
	newP->link = head;
	head = newP;
	return head;
}

struct node *add(struct node *head1, struct node *head2)
{
	if(head1->data == 0)
	return head2;
	if(head2->data == 0)
	return head1;
	
	struct node *ptr1 = head1;
	struct node *ptr2 = head2;
	struct node *head3 = NULL;
	int carry =0,sum;
	while(ptr1 || ptr2)
	{
		sum=0;
		if(ptr1)
			sum += ptr1->data;
		if(ptr2)
			sum += ptr2->data;
		sum += carry;
		carry = sum/10;
		sum = sum%10;
		
		head3 = push(head3, sum);
		
		if(ptr1)
		ptr1 = ptr1->link;
		if(ptr2)
		ptr2 = ptr2->link;
		
	}
	if(carry)
	head3 = push(head3,carry);
	return head3;
}
struct node *add_node(struct node *head ,int val)
{
	
	
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = val;
	newNode->link = NULL;
	
	newNode->link = head;
	head = newNode;
	return head;
}
struct node *reverseL(struct node *head)
{
	if(head == NULL)
	return head;
	
	struct node *current = NULL;
	struct node *next = head->link;
	head->link = NULL;
	while(next != NULL)
	{
		current = next;
		next = next->link;
		current->link = head;
		head = current;
	}
	return head;
}
struct node *createList(struct node *head, int n)
{
	while(n != 0)
	{
		head = add_node(head, n%10);
		n = n/10;
	}
	return head;
}
void print(struct node *head)
{
	struct node *temp = head;
	if(head == NULL)
	{
		printf("No number ");
	}
	else
	{
		while(temp->link  != NULL)
		{
			printf("%d-> ",temp->data);
			temp = temp->link;
		}
		printf("%d",temp->data);
	}
}

void back2num(struct node *head)
{
	struct node *temp = head;
	printf("\nResult = ");
	while(temp)
	{
		printf("%d",temp->data);
		temp = temp->link;
	}
	return;
}

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	
	printf("Linked list representation of the first numbner: \n");
	struct node *head1 = NULL;
	head1 = createList(head1, a);
	print(head1);
	
	struct node *head2 = NULL;
	printf("\nLinked list representation of the second number is as: \n");
	head2 = createList(head2, b);
	print(head2);
	
	head1 = reverseL(head1);
	head2 = reverseL(head2);
	printf("\nReversed Linked List \n");
	print(head1);
	printf("\n");
	print(head2);
	
	struct node *head3 = NULL;
	head3 = add(head1,head2);
	printf("\n Resultant linked list after addition:  \n");
	print(head3);
	
	back2num(head3);
	
	return 0;
}
