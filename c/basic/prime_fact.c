#include<stdio.h>
int prime(int a)
{
	int i;
	for( i=2;i<a;i++)
	{
		if(a%i == 0)
			break;
	}
	if(i==a)
		return i;

}
int main()
{
	int i,num,fact,flag=0, arr[num],k=0,x;
	printf("Enter number\n");
	scanf("%d",&num);	
	for( i=2;i<=num;i++)
	{
		if( num % i == 0 )
		{
			printf("%d ",i);
			x=prime(i);
			//arr[k++]=x;
		}
	}
	
	/*
	int ele = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<ele;i++)
	printf("%d ",arr[i]);
	for(i=0;i<num;i++)
	printf("%d ",arr[i]);*/
}
	

