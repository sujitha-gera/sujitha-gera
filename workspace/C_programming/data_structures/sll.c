#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
//insert front
struct node *insertfront(struct node *front,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->next=front;
	front=temp;
	return front;
}
//delete first
struct node *deletefront(struct node *front)
{
	struct node *t1=front;
	while(front!=NULL)
	{
		front=front->next;
		free(t1);
	}
	return front;
}
//insert last
struct node *insertlast(struct node *front,int val)
{
	struct node *t1,*temp=(struct node*)malloc(sizeof(struct node));
	t1=front;
	temp->data=val;
	if(front==NULL)
	{
		temp->next=NULL;
		front=temp;
	}
	else
	{
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=temp;
		temp->next=NULL;
	}
	return front;
}
//delete last
struct node *deletelast(struct node *front)
{
	struct node *t1,*t2=(struct node*)malloc(sizeof(struct node));
	if(front==NULL)
	{
		front=front->next;
		free(t1);
	}
	else
	{
		t1=front;
		while(t1->next->next!=NULL)
		{
			t1=t1->next;
		}
		t2=t1->next;
		t1->next=NULL;
		free(t2);
	}
	return front;
}
//insert middle
struct node *insertmiddle(struct node *front,int val)
{
	struct node *t1,*t2,*temp=(struct node*)malloc(sizeof(struct node));
	t1=front;
	t2=front->next;
	temp->data=val;
	while(t2 && t2->next && t2->next->next)
	{
		t2=t2->next->next;
		t1=t1->next;
	}
	temp->next=t1->next;
	t1->next=temp;
	return front;
}
//delete middle
struct node *deletemiddle(struct node *front)
{
	struct node *t1,*t2=(struct node*)malloc(sizeof(struct node));
	t1=front;
	t2=front->next;
	while(t2 && t2->next && t2->next->next)
	{
		t2=t2->next->next;
		t1=t1->next;
	}
	t2=t1->next;
	t1->next=t2->next;
	free(t2);
	return front;
}
//insert at particular position
struct node *insertpos(struct node *front,int val,int pos)
{
	struct node *t1,*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	int count=1;
	if(pos==1)
	{
		temp->next=front;
		front=temp;
	}
	else
	{
		t1=front;
		while(count<pos-1)
		{
			t1=t1->next;
			count++;
		}
		temp->next=t1->next;
		t1->next=temp;
	}
	return front;
}
//delete at particular position
struct node *deletepos(struct node *front,int pos)
{
	struct node *t1,*t2=(struct node*)malloc(sizeof(struct node));
	t1=front;
	t2=front->next;
	int count=1;
	if(pos==1)
	{
		front=front->next;
		free(t1);
	}
	else
	{
		while(count<pos-1)
		{
			t1=t1->next;
			count++;
		}
		t2=t1->next;
		t1->next=t2->next;
		free(t2);
	}
	return front;
}
//display nodes
struct node *display(struct node *front)
{
	struct node *t1=front;
	while(t1!=NULL)
	{
		printf("%d ",t1->data);
		t1=t1->next;
	}
	return front;
}
void main()
{
	struct node *first=NULL;
	int choice,val,pos;
	for(;;)
	{
		printf("enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value:");
				scanf("%d",&val);
				first=insertfront(first,val);
				break;
			case 2:
                                first=deletefront(first);
                                break;

			case 3:
				printf("enter val:");
				scanf("%d",&val);
				first=insertlast(first,val);
				break;
			case 4:
                                first=deletelast(first);
                                break;
			case 5:
                                printf("enter val:");
                                scanf("%d",&val);
                                first=insertmiddle(first,val);
                                break;
			case 6:
                                first=deletemiddle(first);
                                break;
			case 7:
				printf("enter val:");
				scanf("%d",&val);
				printf("enter position:");
				scanf("%d",&pos);
				first=insertpos(first,val,pos);
				break;
			case 8:
				printf("enter position:");
                                scanf("%d",&pos);
                                first=deletepos(first,pos);
                                break;
			case 9:
				first=display(first);
				break;
		}
	}
}
