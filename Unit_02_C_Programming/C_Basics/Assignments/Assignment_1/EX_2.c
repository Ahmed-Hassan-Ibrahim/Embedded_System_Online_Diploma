/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 1 EX 2 <<Write C Program to Print a Integer Entered by a User>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &input);

	printf("You entered: %d", input);

	return EXIT_SUCCESS;
}
