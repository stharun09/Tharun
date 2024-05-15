#include<stdio.h>
int main()
{
FILE *fp1,*fp2; 
fp1=fopen("one","r");
fp2=fopen("one","w");
fputc('A',fp1);
fputc('B',fp2) ;
fclose(fp1) ;
fclose(fp2);
}
