/*
 ============================================================================
 Name        : EX_2.5.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 2.5 (Search for element in array)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, n, x, arr[100];

	printf("Enter number of elements: ");
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
		scanf("%d", &arr[i]);
	}

	printf("\nEnter element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
			printf("Number found at location %d", i + 1);
			break;
		}
	}

	if(i == n)
		printf("Number not found in the array");

	return EXIT_SUCCESS;
}
