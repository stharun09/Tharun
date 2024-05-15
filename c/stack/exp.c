#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^\n]",str);
	int i=0;
	while(str[i]=='-')
	{
		atoi(str[i-2]);
		i++;
	}
	
	for(i=0;str[i];i++)
	{
		if(str[i]=='-')
			printf("%d",str[i-2]-str[i-1]);
	}
}
