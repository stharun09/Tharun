#include<stdio.h>
#include<math.h>
int main()
{
	int mul=1,i,n,power;
	scanf("%d%d",&n,&power);
	for(i=power;i>=1;i--)
		mul=mul*n;
	int x=pow(n,power);
	printf("%d\t",x);
	printf("%d\n",mul);


}
