/*
 ============================================================================
 Name        : Lab_4.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Functions Lab 4 <Print pattern>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printPattern()
{
	int i, j;

	for(i = 0; i < 10; i++)
	{
		for(j = i; j < 10; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return;
}

int main(void) {

	printPattern();

	return EXIT_SUCCESS;
}
