//add end in linked list
#include<stdio.h>
#include<stdlib.h>
struct structure
{
	int num;
	struct structure *next;
};
int search(struct structure *hptr,int num)
{
	while(hptr != NULL)
	{
		if(hptr->num == num)
		{
			printf("found\n");
			return 0;
		}
		hptr=hptr->next;

	}
	printf("not found\n");
}
int main()
{
	char op;
	int num;
	struct structure *hptr=NULL;
	do{
	struct structure *newnode=malloc(sizeof(struct structure));
	printf("Enter number : ");
	scanf("%d",&newnode->num);
	newnode->next=NULL;

	if(hptr==NULL)
	{
	//newnode->next=hptr;
	hptr=newnode;
	}
	else
	{
		struct structure *temp=hptr;
		while(temp->next != NULL)
			temp=temp->next;
		temp->next=newnode;
	}
	printf("Enter you want to add (y/n)");
	scanf(" %c",&op);
	}while(op=='y'||op=='Y');
	struct structure *p=hptr;
	
	printf("Entered elements are : \n");
	while(p != NULL)
	{
		printf("%d ",p->num);
		p=p->next;
	}
	printf("\n");
	printf("Enter the element you want to search ");
	scanf("%d",&num);
	search(hptr,num);





}
