#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	scanf("%s",str);
	for(i=0;str[i];i++);
	printf("%d",i);
}
