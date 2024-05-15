#include<stdio.h>
#include<string.h>
int main()
{

	char str1[100],ch;
	int i;
	scanf("%s ",str1);
	scanf("%c",&ch);
	//char * ret = strchr(str1,'e');
	//printf("%p\n",ret);
	for(i=0;str1[i];i++)
		printf("%p\t",str1+i);
	for(i=0;str1[i];i++)
	{
		if(str1[i]==ch)
			printf("\n%p\n",str1+i);
	}

	
}
