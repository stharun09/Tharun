#include<stdio.h>
int main()
{
	int i,pos,k=7;
	unsigned char n,num;
	printf("Enter num \n");
	scanf("%d",&num);
	printf("Enter position\n");
	scanf("%d",&pos);
	printf("\n\nyou entered num %d \n",num);
	for(i=pos;i>=0;i--)
	{
		n= ((num>>i) & 1);
		num= (num|(n<<k));
		k--;
	}
	
	for(i=31;i>=0;i--)
	{
		n= (num>>i)&1;
		printf("%d",n);
	}
	printf("\n%d\n",num);


}

