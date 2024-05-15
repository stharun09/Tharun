//queue operations
#include<stdio.h>
int enqueue(int queue[],int,int);
void dequeue();
void peek();
void isfull();
void isempty();

int main()
{
	int iop;
	int rear,front,queue[10];
	rear=front=-1;
	while(1)
	{
	printf("1.enqueue() 2.dequeue() 3.peek() 4.isfull() 5.isempty() \n");
	printf("Enter your options : ");
	scanf("%d",&iop);
	
	switch(iop)
	{
		case 1:enqueue(queue,rear,front);break;
	       	case 2:dequeue();break;
		case 3:peek();break;
		case 4:isfull();break;
		case 5:isempty();break;
		default:printf("Enter valid option\n");
	}	
		
	}
}
int enqueue(int queue[],int rear,int front)
{
	printf("your in enqueue definition\n");
	printf("Enter elements \n");
	while(1)
	{
	if(rear==10)
	{
		printf("queue is overflow\n");
		break;
	}
	rear++;
	
	scanf("%d",&queue[rear]);
	}

	
}
void dequeue()
{
	printf("your in dequeue definition\n");
	


}
void peek()
{
	printf("your in peek definition\n");

}
void isfull()
{
	printf("your in isfull definition\n");

}
void isempty()
{
	printf("your in isempty definition\n");

}
