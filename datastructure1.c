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
/*head gives the address of first node so declared as global variable to be used in other functions*/

/*TRAVERSAL OF NODE OF SINGLE LINKED LIST*/
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
		insert(x);
		print();
	}
}

void insert(int x)
{
		struct node *ptr;		//pointer is used to hold node data and link(address of next node) 
		ptr=(struct node *)malloc(sizeof(struct node));
		//ptr=malloc(sizeof(struct node));
/*malloc creats memory dynamically and malloc returns void pointer*/
		ptr->data=x;			//entering data in to the nodes
		ptr->link=NULL;
		head=ptr;			//to initialize linked list address of first node is given to head
}

void print()
{
		struct node *ptr2=head;
		while(ptr2!=NULL)				//TRAVERSING
		{
			printf("%d",ptr2->data);
			ptr2=ptr2->link;
		}
		//printf("%d \n",ptr->data);
		printf("\n");
}

