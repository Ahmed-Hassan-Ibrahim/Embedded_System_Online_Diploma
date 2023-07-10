/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics Lab 2 <<Comparing three numbers>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, b, c;

	printf("Enter 3 number values: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);

	printf("The largest number: %d", a > b ? (a > c ? a : c) : (b > c ? b : c));

	return EXIT_SUCCESS;
}
