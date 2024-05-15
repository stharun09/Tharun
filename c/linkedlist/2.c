#include<stdio.h>
struct structure
{
	int inum;
	char ch;
	float fnum;
	char carr[100];
	struct structure *next;
}var;
int main()
{	struct structure *p=&var;	
	scanf("%d",&p->inum);
	printf("%d",p->inum);	
	

}
