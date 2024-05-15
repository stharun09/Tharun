#include<stdio.h>
#include<string.h>
int ncmp(char *str1,char*str2,int n)
{
	for(int i=0;i<n;i++)
	{
		if(str1[i] == str2[i])
			return 0;
		else if(str1[i] < str2[i])
			return str1[i]-str2[i];
		else
			return str1[i]-str2[i];
	}
}
		
int main()
{
	char str[100],str1[100];
	scanf("%s",str);
	scanf("%s",str1);
	int n;
	scanf("%d",&n);
	int ret = ncmp(str,str1,n);

	if(ret < 0)
	{
		printf("%d\n",ret);
		printf("str1 is less than str2\n");
	}
	else if(ret > 0)
	{
		printf("%d\n",ret);
		printf("str1 is greater than str2\n");
	}
	else
		printf("strings are equal\n");
	
	
}
		
