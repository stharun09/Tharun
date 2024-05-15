#include<stdio.h>
int main()
{
	char ch,str[100],str1[100];
	int i,j,count=0;
	scanf("%s",str);
	ch=str[0];
	for(i=0;str[i];i++)
	{
		for(j=0;j<i;j++)
		{
			if(str[i]==str[j])
				break;
		}
		if(i==j)
		{
			for(j=1,count=1;str[j];j++)
			{
				if(str[i]==str[j])
					count++;
			}

		}
		if(count>1)
			printf("%c",str[i]);
	}
}
