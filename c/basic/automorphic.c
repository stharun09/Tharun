#include<stdio.h>
int main()
{
	int num,i=0;
	scanf("%d",&num);
	int square = num * num;
	while(num !=0 )
	{
	if(num %10 != square %10)
	{
		printf("not an automorphic\n");
		return 0;
	}
	num/=10;
	square /=10;
	}
	if(num == 0)
		printf("yes\n");

	
}

