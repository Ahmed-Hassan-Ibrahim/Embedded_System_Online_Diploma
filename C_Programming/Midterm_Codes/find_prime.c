/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to print all prime numbers between 2 numbers
 ============================================================================
 */

#include <stdio.h>
void primeInterval(int a, int b)
{
	int i, j, flag = 1;
	printf("Prime numbers between %d and %d are: ", a, b);
	for(i = a+1; i < b; i++)
	{
		for(j = 2; j <= i/2; j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("%d ", i);
		flag = 1;
	}
}
int main()
{
    int n1 = 1, n2 = 20;
    primeInterval(n1, n2);
    return 0;
}