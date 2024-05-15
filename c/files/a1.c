#include<ctype.h>
#include<string.h>
#include<stdio.h>
int main()
{
	FILE*fp,*fp1;
	fp=fopen("data","w");
	fp1=fopen("data1","w");
	char ch[100],ch1;
	fgets(ch,sizeof(ch),stdin);
	while( (ch1=fgetc(fp)) != -1)
		fputc(ch1,fp1);

}
