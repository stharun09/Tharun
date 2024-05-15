//Implement search function for doubly link lis
#include<stdio.h>
struct structure{
	int num;
	struct structure *prev,*next;
}p;
void search(struct structure *);
int main()
{
	char op;
	struct structure *head,*p;
	if(head == NULL)
	{

	printf("Enter element (y/n)?");
	scanf("%c",&op);

	while(op=='y')
	search(p);


}
