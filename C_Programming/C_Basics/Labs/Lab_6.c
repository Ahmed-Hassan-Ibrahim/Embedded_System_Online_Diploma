/*
 ============================================================================
 Name        : Lab_6.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics Lab 6 <<Produce the following output>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j;

	for(i = 0; i < 10; i++)
	{
		for(j = i; j < 10; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
