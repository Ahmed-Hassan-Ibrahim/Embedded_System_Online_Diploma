/*
 ============================================================================
 Name        : EX_6.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 1 EX 6 <<Write Source Code to Swap Two Numbers>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a, b, temp;

	printf("Enter Value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);

	printf("Enter Value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);

	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a: %f\n", a);
	printf("After swapping, value of b: %f\n", b);

	return EXIT_SUCCESS;
}
