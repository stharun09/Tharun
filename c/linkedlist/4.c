//passing structure pointer
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
void scan(struct structure*);
int main()
{	struct structure *p=malloc(sizeof(struct structure));	
	scan(p);
}
void scan(struct structure *p)
{

	scanf("%d",&p->inum);
	printf("%d",p->inum);	
	

}
