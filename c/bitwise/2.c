#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<1000;i++)
	{
		int n=i & 1;
		if(n==1)
			printf("%d is odd\n",i);
		else
			printf("%d is even\n",i);
	}
}
