#include<stdio.h>
int main()
{
	int n,i,count,j,k=0;
	for(j=1;j<1000;j++)
	{
		for(i=2,count=0;i>=0;i--)
		{
			n=(j>>i)&1;
			if(n==0)
				count++;
		}
		
		if(count==3)
		{
			printf("%d is divisible by 8\n",j);
			k++;
		}
		
	}
	printf("total numbers between 1 to 1000 is %d \n",k);
}

