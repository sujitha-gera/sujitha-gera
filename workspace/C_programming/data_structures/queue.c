#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void enqueue(struct node **front,struct node **rear,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if(*rear==NULL)
	{
		*front=temp;
		*rear=temp;
	}
	else
	{
		(*rear)->next=temp;
		*rear=temp;
	}
}
int dequeue(struct node **front)
{
	struct node *temp=*front;
	if(*front==NULL)
	{
		printf("queue is empty\n");
		return -1;
	}
	int x=temp->data;
	*front=temp->next;
	free(temp);
	return x;
}
void main()
{
	struct node *front,*rear=NULL;
	enqueue(&front,&rear,1);
	enqueue(&front,&rear,2);
	printf("%d ",dequeue(&front));
	printf("%d\n",dequeue(&front));
}
