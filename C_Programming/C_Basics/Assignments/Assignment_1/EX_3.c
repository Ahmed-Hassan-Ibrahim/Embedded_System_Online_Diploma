/*
 ============================================================================
 Name        : EX_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 1 EX 3 <<Write C Program to Add Two Integers>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b;

	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);

	printf("Sum: %d", a + b);

	return EXIT_SUCCESS;
}
