#include<stdio.h>
struct student 
{
	int x,y;
};
int main()
{
	struct student test;
	scanf("%d",&test.x);
	printf("you entered the element %d",test.x);

}
