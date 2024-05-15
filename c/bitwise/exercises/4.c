#include<stdio.h>
int main()
{
	int num,i,nth_bit;
	printf("Enter number and nth_bit \n");
	scanf("%d %d",&num,&nth_bit);
	if( ((num >> nth_bit) & 1) == 0)
		num = (num>>nth_bit) | 1;
	else
		num = (num >> nth_bit) & 0;
	printf("%d\n",num);




}
