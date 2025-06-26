/*
 ============================================================================
 Name        : EX_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 1 <<Check whether a number is even or odd>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input;

	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &input);

	if(input % 2 == 0)
		printf("%d is even.", input);
	else
		printf("%d is odd.", input);

	return EXIT_SUCCESS;
}
