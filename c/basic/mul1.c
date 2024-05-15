#include<stdio.h>
/* Works only if a >= 0 and b >= 0 */
int power(int a, int b)
{
//base case : anything raised to the power 0 is 1
if (b == 0)
	return 1;
int answer = a;
int increment = a;
int i, j;
for(i = 1; i < b; i++)
{
	for(j = 1; j < a; j++)
	{
		answer += increment;
	}
	increment = answer;
}
return answer;
}

/* driver program to test above function */
int main()
{

	int x,y;
	scanf("%d%d",&x,&y);

	printf("\n %d", power(x, y));

return 0;
}

