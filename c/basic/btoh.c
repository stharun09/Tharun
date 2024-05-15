#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int digit,i=0,sum=0,count=0,k=0;
	long num;
	scanf("%ld",&num);
	while(num)
	{
		if(count ==4 )
		{
			count=0;
			sum=0;
			i=0;
		}

		while(count != 4)
		{
		digit=num%10;
		sum=sum+(digit * pow(2,i));
		num/=10;
		i++;
		count++;
		}
		printf("%1x ",sum);		
	}
	
	
	
	
	
}
