#include<stdio.h>

void atoz(int ,int );
void zton(int ,int );
int main()
{
	char str[100];
	int i,k;
	


	printf("Enter anything you want..i will print logic\n");
	scanf("%[^\n]",str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='-')
			{
				if(str[i-1] && str[i+1] )
					atoz(str[i-1],str[i+1]);
				
			
			}
		printf("%c",str[i]);
	}
	printf("\n");
		
	printf("%s",str);




}
void atoz(int start,int end)
{
for(int i=start;i<=end;i++)
{
	
	printf("%c",i);
}
}


