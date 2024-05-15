#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int check(char *s)
{
	int i;
	for( i=0;s[i];s++)
		//while(s[i]=='0' && s[i+1] == 'x');
		if(!isxdigit(s[i]))
			return 0;
	return 1;
}

int main()
{
	char hex[100];
	int ret,decimal;
	scanf("%s",hex);
	if(ret=check(hex)){
		 decimal =strtol(hex,NULL,16);
		 printf("decimal equivalent %d\n",decimal);}
	else
		printf("Enter valid hexadecimal format\n");

	

}
