#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		int num = i & (i-1);
		if(num == 0)
			printf("%5d is power of 2\n",i);
	}
}
	
