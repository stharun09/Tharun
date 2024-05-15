#include<stdio.h>

//#include<string.h>
int Strlen(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}
int main()
{
	char *ptr ,arr[100];
	ptr=arr;
	
	//Strlen(arr);
	//Strlen(ptr);
	int ret=Strlen(ptr);
	printf("%d\n",ret);
}
