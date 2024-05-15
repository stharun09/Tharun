#include<stdio.h>
#include<string.h>
int check(char *,char *,int,int);
int main()
{
	char str[100],str1[100],str2[100];
	printf("Enter a string : ");
	int n;
	scanf("%[^\n]",str);
	printf("Enter how many charcaters you want to check : ");
	scanf("%d",&n);
	printf("Enter a string u want to check : ");	
	scanf("%s",str1);	
	int i,j=0,ret=strlen(str),last = ret -n;
	for(i=last;i<ret;i++)
	{
		str2[j++]=str[i];
	
	}
	
	int re = check(str2,str1,ret,last);
	printf("%d\n",re);
}
int check(char *s,char *s1,int ret,int last)
{
	int i,j=0,index[100],k=0;
	//printf("%c",*s1);	
//	printf("%d %d ",ret,last);
        for(i = last;i<ret;i++)
	{
		if( *s++ != *s1++)
			break;
		else
			index[k++]=i;
	}
	if(i==ret)
		return index[0];
	else
		return -1;


}
