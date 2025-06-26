/*
 ============================================================================
 Name        : EX_4.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 4 C functions EX 4 <Calculate power using recursion>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base, int pow)
{
	if(pow == 1)
		return base;

	base *= power(base, pow-1);
	return base;
}

int main(void) {

	int base, pow;

	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &base);

	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &pow);

	while(pow <= 0)
	{
		printf("Error!!! power is not a positive integer\n");
		printf("Enter power number(positive integer): ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &pow);
	}

	printf("%d^%d = %d", base, pow, power(base, pow));


	return EXIT_SUCCESS;
}
