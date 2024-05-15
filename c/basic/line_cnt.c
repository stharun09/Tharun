#include<stdio.h>
int main()
{
	long nc=0,c,cnt=0;
	while((c=getchar() )!= EOF)
	{
		if(c=='\n')
			cnt++;
	}
	printf("%ld\n",cnt);
}
