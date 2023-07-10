/*
 ============================================================================
 Name        : EX_5.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 1 EX 5 <<Write C Program to Find ASCII Value of a Character>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char input;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &input);

	printf("ASCI value of %c: %d", input, input);

	return EXIT_SUCCESS;
}
