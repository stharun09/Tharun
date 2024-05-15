//strstr
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],sub_str[100];
	int i,j,k;
	char *last;
	scanf("%[^\n] %[^\n]",str,sub_str);
	for(i=0;str[i];i++)
		printf("%p\t",str+i);
	printf("\n");
	for(i=0;str[i];i++)
	{
		k=i;
		for(j=0;sub_str[j];j++)
		{
			if(str[k++]!=sub_str[j])
				break;
			else
				last=str+i;
		}
		if(j==strlen(sub_str))
		{
			printf("yes found\n");
			printf("%p\n",last);
			break;
		}
	
	}
}
