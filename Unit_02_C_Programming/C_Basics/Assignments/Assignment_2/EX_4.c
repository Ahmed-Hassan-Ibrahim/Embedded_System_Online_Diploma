/*
 ============================================================================
 Name        : EX_4.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 4 <<Check if number is positive or negative>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float input;

	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &input);

	if(input > 0)
		printf("%f is positive.", input);
	else if(input == 0)
		printf("You entered zero");
	else
		printf("%f is negative.", input);

	return EXIT_SUCCESS;
}
