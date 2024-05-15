#include<stdio.h>
char * number_word(int num)
{
	char * ones[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char * teens[]={" ","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
	char * ty[]={" ","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	while(num)
	{
	int digit = num%10;//0
	printf("%s",ty[digit]);	
	num/=10;
	}
	

}
int main()
{
	int num;
	printf("Enter number \n");
	scanf("%d",&num);
	char *ret=number_word(num);
	printf("%s",ret);
}
