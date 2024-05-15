#include<stdio.h>
struct structure
{
	int inum;
	char ch;
	float fnum;
	char carr[100];
	struct structure *next;
}var1;
int main()
{
	struct structure *next=NULL;

	//scanf("%d",&var1.num);
	
//	scanf("%d %f %c %s",&(&var1)->inum,&(&var1)->fnum,&(&var1)->ch,(&var1)->carr);
	scanf("%d %f %c %s",&var1.inum,&var1.fnum,&var1.ch,var1.carr);
	printf("%d",var1.inum);

}
