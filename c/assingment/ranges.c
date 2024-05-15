#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	/*short int a;int b;long int c;
	char d;
	float e;double f;*/

	//signed data types
	printf("signed data types\n");
	printf("MIN=%d MAX=%d\n",CHAR_MIN,CHAR_MAX);
	printf("MIN=%d MAX=%d\n",SHRT_MIN,SHRT_MAX);	
	printf("MIN=%d MAX=%d\n",INT_MIN,INT_MAX);	
	printf("MIN=%g MAX=%g\n",FLT_MIN,FLT_MAX);
	printf("MIN=%ld MAX=%ld\n",LONG_MIN,LONG_MAX);
	printf("MIN=%g MAX=%g\n",DBL_MIN,DBL_MAX);
	//unsigned data types 
	printf("unsigned data types\n");
	printf("MIN=%d MAX=%u\n",0,(unsigned char)UCHAR_MAX);
	printf("MIN=%d MAX=%u\n",0,USHRT_MAX);	
	printf("MIN=%d MAX=%u\n",0,(unsigned int )UINT_MAX);	
	printf("MIN=%d MAX=%lu\n",0,ULONG_MAX);
		
	

	printf("CHAR=%d\n",CHAR_BIT);	
	
}


