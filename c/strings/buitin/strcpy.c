#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100];
	scanf("%s%s",str,str1);
	strcpy(str,str1);
	printf("%s\n",str);
}
