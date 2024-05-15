#include<string.h>
#include<stdio.h>
int main()
{
	
	
	char str[10],str1[10];
	int i;
	scanf("%s",str);
	for( i=0;i<strlen(str);i++)
		str1[i]=str[i];
	str1[i]='\0';
	printf("%s",str1);
}
