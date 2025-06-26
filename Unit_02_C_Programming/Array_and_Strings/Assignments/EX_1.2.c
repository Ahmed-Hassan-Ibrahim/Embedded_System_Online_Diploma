/*
 ============================================================================
 Name        : EX_1.2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 1.2 (continue statement)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int input, i, product = 1;

	for(i = 0; i < 4; i++)
	{
		printf("Enter num%d: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &input);

		if(input == 0)
			continue;
		product *= input;
	}

	printf("Product = %d", product);

	return EXIT_SUCCESS;
}
