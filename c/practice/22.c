#include<stdio.h>
void check(char []);
void space(char []);
int main()
{
	char string[100];
	scanf("%[^\n]s",string);
	space(string);
//	check(string);
}
void space(char str[])
{
	int i,j;
	for(i=0;str[i];i++)
	{
		if(str[i] == ' '){
			for(j=0;str[j] != ' ';j++);
				str[i+1]=str[j];
		}
	}
	printf("%s",str);

}
/*
void check(char  str[])
{
	int i;
	if(str[i] != ' ')
	printf("%c ",str[0]);
	for(i=0;str[i];i++)
	{
		if(str[i] == ' ')
			printf("%c ",str[i+1]);
	}


}*/
