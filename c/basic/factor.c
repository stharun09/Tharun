#include<stdio.h>
int main()
{
	int num,fact,flag=0;
	printf("Enter number\n");
	scanf("%d",&num);
	printf("Enter another to check \n");
	scanf("%d",&fact);
	if(num % fact  == 0)
		flag++;
	
	if(flag > 0)
		printf("yes %d is a factor of %d\n",fact,num);
	else	
	printf("no %d is a factor of %d\n",fact,num);
}
	

