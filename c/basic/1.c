#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int b=num>>31;
	int i;
	for(i=31;i>=0;i--)
	{
		int a= (b>>i)& 1;
		printf("%d",a);
	}

}
