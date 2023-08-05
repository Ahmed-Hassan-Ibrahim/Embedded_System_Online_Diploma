/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Functions Lab 1 <Factorial function>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int x)
{
	int i, result = 1;

	for(i = 1; i <= x; i++)
	{
		result *= i;
	}
	return result;
}

int main(void) {

	int x = 5;
	printf("Factorial(%d) = %d", x, fact(x));

	return EXIT_SUCCESS;
}
