#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int n;
	scanf("%s%s",str1,str2);
	scanf("%d",&n);
	int ret=strncmp(str1,str2,n);
	if(ret < 0)
		printf("%d\n",ret);
	else if(ret >0)
		printf("%d\n",ret);
	else
		printf("%d\n",ret);
}
