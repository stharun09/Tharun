#include <stdio.h>
#include <ctype.h>
#define SIZE 5
#define BUFSIZE 100
char buf[BUFSIZE];
int sp = 0;
int getch(void);
void ungetch(int);
int main(){
    int n, array[SIZE],getint(int *);
    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
            printf("the %d index is %d\n", n, array[n]);
    //int i;
    //for (i = 0 ; i < n; i++)
    //    printf("the %d index is %d\n", i, array[i]);
}
int getint(int *pn){
   int c, sign;
   while(isspace(c = getch()))/* skip white space  */
           ;
   if (!isdigit(c) && c != EOF && c != '+' && c != '-'){
       ungetch(c);
       return 0;
   }
   sign = (c == '-')? -1:1;
   if (c == '+' || c == '-'){
       c = getch();
   }
   for (*pn = 0; isdigit(c); c = getch())
       *pn = 10 * *pn + (c - '0');
   *pn *= sign;
   if (c != EOF)
       ungetch(c);
   return c;
}
int getch(){
    return (sp > 0)? buf[--sp]:getchar();
}
void ungetch(int s){
    buf[sp++] = s;
}
