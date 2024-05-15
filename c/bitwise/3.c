#include<stdio.h>
int main()
{
	int i,n,j;
	for(i=-10;i<10;i++)
	{
		
			n=(i>>31)&1;
			if(n)
				printf("%d is negative\n",i);
			else
				printf("%d is positive\n",i);
	}
}

