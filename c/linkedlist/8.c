#include<stdio.h>
#include<stdlib.h>
struct data
{
	int num;
	struct data *next;
};
int main()
{
	char op;
	struct data * hptr=NULL;
	do{
	struct data *newnode=malloc(sizeof(struct data));
	if(newnode == NULL)
	{
		printf("memory is not allocated\n");
		return 0;
	}
	printf("Enter data : ");
	scanf("%d",&newnode->num);

	if(hptr == NULL)
	{
		hptr=newnode;
	}
	else
	{
		
		//newnode=hptr;
		newnode->next=hptr;
		hptr=newnode;
			
	}
	printf("Enter to add element (y/n) : ");
	scanf(" %c",&op);	
	}while(op=='y'||op=='Y');

	struct data *p=hptr;
	while(p != NULL)
	{
		printf("%d ",p->num);
		p=p->next;
	}
	printf("\n");	


	
		
}
