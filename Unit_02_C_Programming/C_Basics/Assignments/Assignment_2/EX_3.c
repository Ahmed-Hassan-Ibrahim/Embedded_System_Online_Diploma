/*
 ============================================================================
 Name        : EX_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 3 <<Find largest number among 3>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a, b, c;

	printf("Enter 3 number values: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);

	printf("The largest number: %f", a > b ? (a > c ? a : c) : (b > c ? b : c));

	return EXIT_SUCCESS;
}
