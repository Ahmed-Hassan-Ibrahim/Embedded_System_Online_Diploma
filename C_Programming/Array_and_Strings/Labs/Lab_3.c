/*
 ============================================================================
 Name        : Lab_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array and Strings Lab 3 (Calculate and print transpose of a 3x3 matrix)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float matrix[3][3], transpose[3][3];
	int row, col;

	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 3; col++)
		{
			printf("Enter the item(%d, %d): ", row, col);
			fflush(stdin); fflush(stdout);
			scanf("%f", &matrix[row][col]);
		}
	}

	printf("\nThe matrix is: \n");

	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 3; col++)
		{
			printf("%0.2f \t", matrix[row][col]);
		}
		printf("\n");
	}

	printf("\nThe matrix transpose is: \n");

	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 3; col++)
		{
			transpose[row][col] = matrix[col][row];
			printf("%0.2f \t", transpose[row][col]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
