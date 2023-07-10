/*
 ============================================================================
 Name        : EX_4.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 1 EX 4 <<Write C Program to Multiply two Floating Point Numbers>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a, b;

	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a, &b);

	printf("Product: %f", a * b);

	return EXIT_SUCCESS;
}
