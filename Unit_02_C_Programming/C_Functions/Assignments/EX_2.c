/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 4 C functions EX 2 <Calculate factorial using recursion>
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int fact(int x)
{

	if(x == 0 || x == 1)
		return 1;

	x *= fact(x-1);
	return x;
}

int main(void) {

	int input;

	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &input);

	while(input <= 0)
	{
		printf("Error!!! input is not a positive integer\n");
		printf("Enter a positive integer: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &input);
	}

	printf("Factorial of %d = %d", input, fact(input));

	return EXIT_SUCCESS;
}
