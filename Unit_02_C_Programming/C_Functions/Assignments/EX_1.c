/*
 ============================================================================
 Name        : EX_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 4 C functions EX 1 <Find prime numbers between intervals>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeInterval(int a, int b)
{
	int i, j, flag = 1;

	printf("Prime numbers between %d and %d are: ", a, b);

	for(i = a+1; i < b; i++)
	{
		for(j = 2; j < i/2; j++)
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

int main(void) {

	int a, b;

	printf("Enter 2 numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d", &a, &b);

	while(a >= b)
	{
		printf("Error!!! first input must be less than and not equal to second input\n");
		printf("Enter 2 numbers(intervals): ");
		fflush(stdin); fflush(stdout);
		scanf("%d%d", &a, &b);
	}

	primeInterval(a, b);

	return EXIT_SUCCESS;
}
