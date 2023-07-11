/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 2 <<Check vowel or consonant>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char input;

	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &input);

	if(input == 'i' || input == 'o' || input == 'u' || input == 'a' || input == 'e' ||
	   input == 'I' || input == 'O' || input == 'U' || input == 'A' || input == 'E')
		printf("%c is a vowel.", input);
	else
		printf("%c is a consonant.", input);

	return EXIT_SUCCESS;
}
