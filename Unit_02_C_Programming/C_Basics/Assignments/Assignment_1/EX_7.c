/*
 ============================================================================
 Name        : EX_7.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 1 EX 7 <<Write Source Code to Swap Two Numbers without temp variable>>
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a, b;

		printf("Enter Value of a: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &a);

		printf("Enter Value of b: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &b);

		a = a + b;
		b = a - b;
		a -= b;

		printf("After swapping, value of a: %f\n", a);
		printf("After swapping, value of b: %f\n", b);

	return EXIT_SUCCESS;
}
