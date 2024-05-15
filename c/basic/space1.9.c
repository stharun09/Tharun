#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void check(char );
int main()
{
	char * string=(char*)malloc(10000*sizeof(char));
	scanf("%[^\n]s",string);

	check(&string);
}
void check(char string[][])
{
	for(int i=0;strlen(string);i++)
		printf("%c",string+i);

}
