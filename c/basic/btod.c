#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit,i=0,sum=0;
	scanf("%d",&num);
	while(num)
	{
		digit=num%10;
		sum=sum+(digit * pow(2,i));
		num/=10;
		i++;
	}
	printf("%d ",sum);
}
