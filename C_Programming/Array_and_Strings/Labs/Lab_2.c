/*
 ============================================================================
 Name        : Lab_2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array and Strings Lab 2 (Calculate polynomial with set of variables)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float y, x[5] = {5, 16, 22, 3.5, 15};
	int i;

	for(i = 0; i < 5; i++)
	{
		y = 5 * x[i] * x[i] + 3 * x[i] + 2;
		printf("Y(%0.2f) = %0.2f\n", x[i], y);
	}

	return EXIT_SUCCESS;
}
