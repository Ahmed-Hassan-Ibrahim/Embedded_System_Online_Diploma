/*
 ============================================================================
 Name        : EX_2.1.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 2.1 (2x2 matrix addition)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a[2][2], b[2][2];
	int i, j;

	printf("Enter elements of first matrix: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter a(%d, %d): ", i, j);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);

		}
	}

	printf("\nEnter elements of second matrix: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter b(%d, %d): ", i, j);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);

		}
	}

	printf("\nSum of Matrix: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%0.1f\t", a[i][j] + b[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
