/*
 ============================================================================
 Name        : EX_2.2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 2.2 (Calculate average)
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, n;
	float arr[100], sum = 0;

	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	while(n > 100)
	{
		printf("Error! number should be less than 100, Enter another number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &n);
	}

	for(i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}

	for(i = 0; i < n; i++)
		sum += arr[i];

	printf("Average = %0.2f", sum / n);

	return EXIT_SUCCESS;
}
