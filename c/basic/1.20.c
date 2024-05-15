//replace /t /b /n into their fnctionality 
#include<stdio.h>
void replace(char str[])
{
	int i;
	if(str[i]== '\t')
	{
		char spaces= ' ';
		char space=8;
		while(space)
		{
			str[i++]=spaces;
			space--;
		}
	}

	printf("%s\n",str);
}
int main()
{
	char str[100];
	scanf("%s",str);
	replace(str);
}

