#include<stdio.h>
int main()
{
	int a;
	int *ptr=&a;
	int **ptr1=&a;
	printf("%d %d\n",sizeof(ptr),sizeof(ptr1));
}
