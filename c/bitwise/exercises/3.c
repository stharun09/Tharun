#include<stdio.h>
int main()
{
	int num,pos;
	printf("Enter number and position you want \n");
	scanf("%d %d",&num,&pos);
	
	int n= (num>>pos)&1;
	printf("%d\n",n);
}
