#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char *s1,char *s2)
{
	for(int i=0;s1[i]||s2[i];i++)
	{
		if(s1[i] != s2 [i])
		{
			if(s1[i]<s2[i])
				return s1[i]-s2[i];
			else
				return s1[i]-s1[i];
		}
	}
	/*
	for(int i=0;s1[i]||s2[i];i++)
	{
		if(s1[i] != s2 [i])
			return s1[i]-s2[i];
	}
	return 0;
	*/

}

int main()
{
	char str[100],str1[100];//static
	scanf("%s",str);
	scanf("%s",str1);
	//fgets(str1,sizeof(str1),stdin);
	int ret=check(str,str1);
	if(ret==0)
		printf("strings are equal\n");
	if(ret < 0)
	{
		printf("s1 is less than s2\n");
		printf("%d\n",ret);
	}
	if(ret > 0)
	{
		printf("%d\n",ret);
		printf("s1 is greater than s2\n");
	}

}


