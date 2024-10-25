#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
void push(struct node **front,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=*front;
	*front=temp;
}
int pop(struct node **front)
{
	struct node *temp=*front;
	int x=temp->data;
	*front=temp->next;
	return x;
}
void main()
{
	struct node *stack=(struct node*)malloc(sizeof(struct node));
	push(&stack,1);
	push(&stack,2);
	printf("%d ",pop(&stack));
	printf("%d \n",pop(&stack));
}
