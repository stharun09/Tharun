//LSB is set or clear
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);

	if( (num & 1) == 0)
		printf("LSB bit is %d\n",0);
	else
		printf("LSB bit is %d\n",1);
}


