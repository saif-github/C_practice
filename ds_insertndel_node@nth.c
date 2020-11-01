#include<stdio.h>
#include<stdlib.h>			//malloc is defined in stdlib.h
void insert(int data,int pos);
void delete(int pos);
void print();
struct node
{
	int data;				//this is the way to declare data structure
	struct node* link;
};
struct node* head;	          //head is used to initialize the first node

/* enter the data sequentially starting from first position and 
after entering data u can delete or insert node in between */


int main()
{
	head=NULL;		//initialize empty list
	int a,b; 
	int i,n,select=1;
/* a--->data (integer type)
   b--->position at which data has to be insert or delete
   i--->variable used in for loop
   n--->no of nodes
   select--->variable used to select switch cases */
	printf("enter the no of nodes:");
	scanf("%d",&n);
	while(select != 0)
	{
		printf("0:quit\n");
		printf("1:insert node\n");
		printf("2:delete node\n");
		scanf("%d",&select);
		switch(select)
		{
			case 0:
			default:
			printf(" I QUIT \n");
			select=0;
			break;

			case 1:
			for(i=0;i<n;i++)
			{
			printf("enter the data:");
			scanf("%d",&a);	//scan the data to be pass
			printf("enter the position at which data has to be place:");
			scanf("%d",&b);	//scan the position at which data has to be place
			insert(a,b);		//list:insert data (a) at position (b)
			print();
			}
			break;

			case 2:
			printf("enter the position to be delete:");
			scanf("%d",&b);		//scan the position which has to be deleted
			delete(b);
			print();
			break;
		}
	}
}

/*TO INSERT THE NODE AT ANY POSITION*/
void insert(int data,int pos)
{
/*ptr1 is the node to be insert and ptr2 is the (n-1)th node */
	struct node *ptr1=malloc(sizeof(struct node));
	ptr1->data=data;
	ptr1->link=NULL;

	if(pos==1)			// for the node to be insert on first position
	{
		ptr1->link=head;
		head=ptr1;
		//return;			//we can use either return or else 
	}
	else				//for the node to be insert on n^th position
	{
		int i;
		struct node *ptr2=head;
		for(i=0;i<pos-2;i++)		//jumps to the n-1 position of the node
		{
			ptr2=ptr2->link;
		}
		ptr1->link=ptr2->link;
		ptr2->link=ptr1;
	}
}

/*TO DELETE NODE AT ANY POSITION */
void delete(int pos)
{
/* ptr3 is the node to be deleted and ptr4 is the (n-1)th node */
	struct node *ptr3=head;
	if(pos==1)
	{
		head=ptr3->link;
		free(ptr3);			//free is the function used to empty the pointer
		//return;
	}
	else
	{
		int i;
		for(i=0;i<pos-2;i++)
		{
			ptr3=ptr3->link;
		}
		struct node *ptr4=ptr3->link;
		ptr3->link=ptr4->link;
		free(ptr4);
	}
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
