/*
 ============================================================================
 Name        : EX_6.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 6 <<Sum of natural number>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input, i, sum = 0;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &input);

	for(i = 1; i <= input; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);

	return EXIT_SUCCESS;
}
