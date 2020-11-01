#include<stdio.h>
#include<stdlib.h>			//malloc is defined in stdlib.h
void insert(int x);
void print();
struct node
{
	int data;				//this is the way to declare data structure
	struct node* link;
};
struct node* head;	

/*THIS PROGRAM INSERING NODE AT THE BEGINING */

int main()
{
	head=NULL; 
	int i,x,n;
	printf("how many no of node? \n");
	scanf("%d",&n);
	printf("enter the number: \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&x);
	insert(x);
	print();
	}
	//print();
}

/*making new node at the begining of the node*/
void insert(int x)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=x;
	ptr->link=NULL;
	//head=ptr;
	//if(head!=NULL)
	ptr->link=head;
	head=ptr;
}

void print()
{
	struct node *ptr=head;
	while(ptr!=NULL)				//TRAVERSING
	{
	printf("%d ",ptr->data);
	ptr=ptr->link;
	}
	printf("\n");
}
