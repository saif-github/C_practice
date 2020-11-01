#include<stdio.h>
#include<stdlib.h>			//malloc is defined in stdlib.h

struct node newnode(int x);
void print();
void insertathead();

struct node 
{
	int data;				//this is the way to declare data structure
	struct node* prevlink;
	struct node* nextlink;
};

struct node* head;
 
/*DOUBLY LINKED LIST */

main()
{
	head=NULL;
	 
	int i,x,n;
	printf("how many no of node? \n");
	scanf("%d",&n);
	printf("enter the data: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		insertathead(x);
		print();
	}
}
	

struct node newnode(int x)
{
	struct node* ptr=malloc(sizeof(struct node));
	ptr->data=x;
	ptr->prevlink=NULL;
	ptr->nextlink=NULL;
	head=ptr;
	return newnode(x);
}


void insertathead(int x)
{
struct node* ptr2=newnode(x);
if(head==NULL)
{
head=ptr2;
return;
}
head->prevlink=ptr2;
ptr2->nextlink=head;
head=ptr2;
}


void print()
{
	struct node *ptr;				//=head;
	while(ptr!=NULL)				//TRAVERSING
	{
		printf("%d",ptr->data);
		ptr=ptr->nextlink;
	}
	printf("\n");
}		

