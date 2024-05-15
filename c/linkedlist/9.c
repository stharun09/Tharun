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
	struct data *head=NULL;

	do{
		struct data *newnode=malloc(sizeof(struct data));
		if(newnode == NULL)
		{
			printf("memory is not allocated\n");
			return 0;
		}

		printf("Enter the data ");
		scanf("%d",&newnode->num);
		if(head == NULL)
		{
			head = newnode;
		}
		else
		{

		}
		printf("Enter you want to add (y/n) : ");
		scanf(" %c",&op);
	}while(op=='y'||op=='Y');
	
	//printing elements 
	struct data *temp=head;
	while(temp != NULL)
	{
		printf("%d ",temp->num);
		temp=temp->next;
	}
	printf("\n");
}
