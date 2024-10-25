#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *rlink,*llink;
};
struct node *binarytree(struct node *front,int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->llink=NULL;
	temp->rlink=NULL;
	if(front==NULL)
		return temp;
	else
	{
		struct node *t1=front;
		struct node *parent=NULL;
		while(1)
		{
			parent=t1;
			if(temp->data<t1->data)
			{
				t1=t1->llink;
				if(t1==NULL)
				{
					parent->llink=temp;
					return front;
				}
			}
			else if(temp->data>t1->data)
			{
				t1=t1->rlink;
				if(t1==NULL)
				{
					parent->rlink=temp;
					return front;
				}
			}
			else
			{
				free(temp);
				return front;
			}
		}
	}
}
//function to dispaly th etree (in-order traversal)
void display(struct node *front)
{
	if(front!=NULL)	
	{
		display(front->llink);
		printf("%d ",front->data);
		display(front->rlink);
	}
}
void main()
{
	struct node *first=NULL;
	int choice,val;
	for(;;)
	{
		printf("enter choice 1 to insert 2 to display 0  to exit:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter val:");
				scanf("%d",&val);
				first=binarytree(first,val);
				break;
			case 2:
				printf("tree elements in sorted order:");
				display(first);
				printf("\n");
				break;
			case 0:
				exit(0);
		}
	}
}
