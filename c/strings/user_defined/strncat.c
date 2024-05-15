#include<stdio.h>
int main()
{
	char str[100],str1[100];
	int j,i,n;
	scanf("%s%s",str,str1);
	scanf("%d",&n);
	for(i=0;str[i];i++);
	for(j=0;j<n;j++)
	{
		str[i++]=str1[j];
	}
	str[i]='\0';
	printf("%s",str);
}


		
