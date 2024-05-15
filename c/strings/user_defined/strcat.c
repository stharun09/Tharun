#include<stdio.h>
int main()
{
	char str[100],str1[100];
	int j,i;
	scanf("%s",str);
	scanf("%s",str1);
	for(i=0;str[i];i++);
	for(j=0;str1[j];j++)
	{
		str[i++]=str1[j];
	}
	str[i]='\0';
	printf("%s",str);
}


		
