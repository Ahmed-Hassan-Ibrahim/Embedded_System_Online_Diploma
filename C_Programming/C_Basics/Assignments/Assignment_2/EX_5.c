/*
 ============================================================================
 Name        : EX_5.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 5 <<Check if character is alphabet or not>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char input;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &input);

	if( (input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z') )
		printf("%c is an alphabet.", input);
	else
		printf("%c is not an alphabet.", input);

	return EXIT_SUCCESS;
}
