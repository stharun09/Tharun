#include<stdio.h>
int main()
{
	char str2[100],str1[100],str[100];
	int i,j;
	scanf("%[^\n] %[^\n]",str1,str2);
	
	for(i=0;str1[i];i++)
	{

		for(j=0;str2[j];j++)
		{
			if(str1[i]!=str2[j])
				printf("%c",str[i]);

		
		}
		if(str[j]=='\0')
			printf("%c",str[i]);
	}
}



