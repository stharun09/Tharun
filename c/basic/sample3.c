#include<stdio.h>
int fun(int ,int);
int main()
{
	int num,pow;
	scanf("%d %d",&num,&pow);
	fun(pow,num);

}
int fun(int pow,int num)
{
	if(pow==0)
	{
		return 1;
	}
	if(pow==1)
	{
		
		printf("%d",num);
		return 0;
	}
}



		
