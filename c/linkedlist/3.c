//using pointer
#include<stdio.h>
#include<stdlib.h>
struct structure
{
	int inum;
	char ch;
	float fnum;
	char carr[100];
	struct structure *next;
}*p;
int main()
{	struct structure *p=malloc(sizeof(p));	
	scanf("%d",&p->inum);
	printf("%d",p->inum);	
	

}
