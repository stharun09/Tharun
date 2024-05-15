#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch[50];
	scanf("%[^\n]",str);
	printf("Enter pattern \n");
	scanf("%s",ch);
	int i,j,k,found=0;
	
	while( str[i] != '\n')
	{
		for(i=0;str[i];i++)
		{
		k=i;
		for(j=0;ch[j];j++)
		{
			if(str[i] != ch[j] ) 
				break;
		}
		if(j==strlen(ch))
		{
			found++;
			break;
		}
		}
		
		i++;
	}
	printf("%d\n",found);
}


