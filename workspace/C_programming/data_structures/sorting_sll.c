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
//sorting using insertion sort
struct node *sorting(struct node *front)
{
    struct node *sorted=NULL;
    struct node *current=front;
    while(current!=NULL)
    {
        struct node *next_node=current->next;
        if(sorted==NULL || sorted->data >= current->data)
        {
            current->next=sorted;
            sorted=current;
        }
        else
        {
            struct node *temp=sorted;
            while(temp->next!=NULL && temp->next->data < current->data)
            {
                temp=temp->next;
            }
            current->next=temp->next;
            temp->next=current;
        }
        current=next_node; //move to next node
    }
    return sorted;
}
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
		printf("enter choice(1 to inset, 2 to sort ,3 to display and 0 to exit):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value:");
				scanf("%d",&val);
				first=insertfront(first,val);
				break;
			case 2:
			    first=sorting(first);
			    break;
			case 3:
			    first=display(first);
			    break;
			case 0:
			    exit(0);
		}
	}
}
