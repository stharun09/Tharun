//to remove comments in a program
#include<stdio.h>
int main(int arg,char *argv[])
{
	FILE*fp=fopen(argv[1],"r");
	char ch;
	while( (ch=getch() )!=EOF)
		printf("%c",ch);
}
