/*
 ============================================================================
 Name        : EX_2.3.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 2.3 (Calculate transpose of matrix)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int row, col, i, j;

	printf("Enter row and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&row, &col);

	int matrix[10][10], transpose[10][10];

	printf("\nEnter elements of matrix: \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("\nEntered matrix: \n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d \t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose of matrix: \n");

	for(j = 0; j < col; j++)
	{
		for(i = 0; i < row; i++)
		{
			transpose[j][i] = matrix[i][j];
			printf("%d \t", transpose[j][i]);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
