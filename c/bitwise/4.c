#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	printf("num1=%d num2=%d\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("num1=%d num2=%d\n",num1,num2);
}

