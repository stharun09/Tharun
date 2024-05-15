//Write a program to count blanks, tabs, and newlines.
#include<stdio.h>
int main()
{
	long  blanks=0, tabs=0,newlines=0;
	int c;
	while((c=getchar()) != EOF)
	{
		if(c == ' ')
			blanks++;
		else if(c == '\t')
			tabs++;
		else if(c == '\n')
			newlines++;
	}
	printf(" \nblanks : %ld\t tabs : %ld\t newlines : %ld\n",blanks,tabs,newlines);

}
