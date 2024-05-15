//strrchr
#include<string.h>
#include<stdio.h>
int main()
{
	char str[100],ch;
	int i;
	char *last;
	scanf("%s ",str);
	scanf("%c",&ch);
	for(i=0;str[i];i++)
		printf("%p\t",str+i);
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
			last=str+i;
	}
	printf("%p\n",last);
}
	
