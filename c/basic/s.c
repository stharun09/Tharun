#include<stdio.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int count=0,i;
	if(str[i]== '\' && str[i+1] == 't')
	{
		while(count!=6)
		{
			printf("%c",' ');
			count++;
		}
	}
}
