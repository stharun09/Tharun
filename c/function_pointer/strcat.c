#include<stdio.h>
char * Strcat(char *s,char*t)
{
	int i=0,j=0;
	while( s[i++] == '\0');

	while( (s[i++] == t[j++]) != '\0' ) ;
	printf("%p\n",s);
	return s;
}
	

int main()
{
	char str[100],str1[100];
	scanf("%[^\n] %[^\n]",str,str1);
	char * ret = Strcat(str,str1);
	printf("%p\n",ret);
}



