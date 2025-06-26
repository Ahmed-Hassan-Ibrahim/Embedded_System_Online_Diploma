/*
 ============================================================================
 Name        : EX_1.1.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 1.1 (break statement)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num, sum = 0;
	int i, n;

	printf("Enter max no. of inputs: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Enter n%d: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);

		if(num < 0)
			break;
		sum += num;
	}

	if(i == 0)
		printf("Average = 0");
	else
		printf("Average = %0.2f", sum / i);

	return EXIT_SUCCESS;
}
