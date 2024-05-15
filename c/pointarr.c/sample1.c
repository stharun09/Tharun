#include<stdio.h>
#include<string.h>
void check(char s[])
{
	printf("%s",s);
}
int main()
{
	char str[100];
	scanf("%s",str);
	check(str);
}
