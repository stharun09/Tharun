#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	scanf("%s%s",str1,str2);
	int ret=strcmp(str1,str2);
	if(ret < 0)
		printf("%d\n",ret);
	else if(ret >0)
		printf("%d\n",ret);
	else
		printf("%d\n",ret);
}
