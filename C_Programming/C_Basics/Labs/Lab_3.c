/*
 ============================================================================
 Name        : Lab_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics Lab 2 <<Calculate the minimum of two numbers>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b;

	printf("Enter 2 number values: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);

	printf("The minimum number: %d", a < b ? a : b);

	return EXIT_SUCCESS;
}
