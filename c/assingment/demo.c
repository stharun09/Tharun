#include<stdio.h>
int main()
{
	char str[100], str1[100];
	scanf("%s %s",str,str1);
	int i,j,index=0;
	for(i=0;str[i];i++)
	{
		for(j=0;str1[j];j++)
		{
			if(str[i]!=str1[j])
				continue;
			else
			{
				index=i;
				break;
			}	
		}
		if(index > 0)
			break;
	}
	printf("found at %d position\n",index);
}
