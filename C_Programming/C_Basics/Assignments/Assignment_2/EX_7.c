/*
 ============================================================================
 Name        : EX_7.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 7 <<Sum of natural number>>
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input, i, product = 1;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &input);

	if (input < 0)
		printf("ERROR!!! Factorial of negative number doesn't exist.");

	else if(input == 0 || input == 1)
		printf("Factorial = 1");

	else
	{
		for(i = 1; i <= input; i++)
		{
			product *= i;
		}
		printf("Factorial = %d", product);
	}

	return EXIT_SUCCESS;
}
