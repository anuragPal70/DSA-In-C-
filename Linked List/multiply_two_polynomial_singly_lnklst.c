#include<stdio.h>	
#include<stdlib.h>
struct node{
	float coeff;
	int expo;
	struct node *link;
};
struct node *insert(struct node *head,float co, int ex)
{
	struct node *temp;
	struct node *newP = malloc(sizeof(struct node));
	newP->coeff = co;
	newP->expo = ex;
	newP->link = NULL;
	if(head == NULL || ex > head->expo)
	{
		newP->link = head;
		head = newP;
	}
	else
	{
		temp = head;
		while(temp->link != NULL && temp->link->expo >= ex)
			temp = temp->link;
			newP->link = temp->link;
			temp->link = newP;
		return head;
	}
}

struct node *create(struct node *head)
{
	int n, i,expo;
	float coeff;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficient for term %d: ",i+1);
		scanf("%f",&coeff);
		printf("Enter the exponent for term %d: ",i+1);
		scanf("%d",&expo);
		head = insert(head,coeff,expo);
	}
	return head;
	struct node *newP = malloc(sizeof(struct node));
}
void polyMultiply(struct node *head1, struct node *head2){
	struct node *ptr1 = head1;
	struct node *ptr2 = head2;
	struct node *head3 = NULL;
	if(head1 == NULL || head2 == NULL)
	{
		printf("There is no Polynomial \n");
	}
	while(ptr1 != NULL)
	{
		ptr2 = head2;
		while(ptr2 != NULL)
		{
			head3 = insert(head3, ptr1->coeff * ptr2->coeff, ptr1->expo + ptr2->expo);
			ptr2 = ptr2->link;
		}
		ptr1 = ptr1->link;
	}
	printf("\n The multiply of both entered polynomials are is as: \n");
	print(head3);
	struct node *ptr3 = head3;
	struct node *temp = NULL;
	
	while(ptr3->link != NULL)
	{
		if(ptr3->expo == ptr3->link->expo)
		{
			ptr3->coeff = ptr3->coeff + ptr3->link->coeff;
			temp = ptr3->link;
			ptr3->link = ptr3->link->link;
			free(temp);
		}
		else
		{
			ptr3 = ptr3->link;
		}
	}
	printf("\n After simplification: \n");
	print(head3);
}
void print(struct node *head)
{
	if(head == NULL)
	printf("No Polynomial \n");
	else
	{
		struct node *temp = head;
		while(temp != NULL)
		{
			printf("(%.1fx^%d) ",temp->coeff,temp->expo);
			temp = temp->link;
			if(temp != NULL)
			printf(" + ");
			else
			printf("\n");
		}
	} 
}
int main(){
	struct node *head1 = NULL;
	struct node *head2 = NULL;
	printf("Enter the first polynomial: \n");
	head1 = create(head1);
	print(head1);
	printf("Enter the second polynomial: \n");
	head2 = create(head2);
	print(head2);
	polyMultiply(head1,head2);
	return 0;
}
