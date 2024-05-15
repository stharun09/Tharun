#include<stdio.h>
int main()
{
	int i,n,j,count,num;
	printf("enter the number you want to check untill : \n");
	scanf("%d",&num);
	for(i=2;i<=num;i*=2)
	{
		
		for(j=31,count=0;j>=0;j--)
		{
			n=(i>>j)&1;
			
			if(n==1)
				count++;
		}
		if(count==1)
		printf("%5d is power of 2\n",i);
	}
		
}

