#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);

	if( ((num >> 31 ) & 1) == 0)
		printf("MSB is %d\n",0);
	else	
		printf("MSB is %d\n",1);
}
