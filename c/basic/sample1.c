#include<stdio.h>
int main()
{
	int num,pos;
	int n=num;
	
	for(num=1;num<=10;num++)
	{
		for(pos=0;pos<10;pos++){
			
			if(num == 1)
			{
				printf("%d power of %d is = %d\n",num,pos,num);
				continue;
		        }
			if(pos == 0)
			{
				printf("%d power of %d is = %d\n",num,pos,1);
				continue;
			}

			n = (1<<pos)/2;
			printf("%d power of %d is = %d\n",num,pos,n);
			}	
	
	}

	

}

