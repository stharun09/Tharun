//Add the commands to print the top elements of the stack without popping, to 
//duplicate it, and to swap the top two elements. Add a command to clear the stack.
#include<stdio.h>
#define max 100

int top =-1,stack[max];
void display(void);
void push();
void pop();

int main()
{
	
	push(10);
	display();

}
void push(int data)
{
	if(top == max)
		printf("stack is underflow\n");
	else
	{
		stack[top++]=data;		
	}
}
void diaplay()
{
	for(int i=0;i<top;i++)
	{
		printf("%d ",stack[i]);
	}
}
		
	
