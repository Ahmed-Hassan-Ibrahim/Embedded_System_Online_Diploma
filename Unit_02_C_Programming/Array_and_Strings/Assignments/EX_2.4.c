/*
 ============================================================================
 Name        : EX_2.4.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 2.4 (Insert into array)
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, n, x, loc, arr[100];

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

	printf("\nEnter element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	printf("\nEnter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &loc);

	while(loc > n)
	{
		printf("Error! location exceeds the input array size, enter another location <= %d: ", n);
		fflush(stdin); fflush(stdout);
		scanf("%d", &loc);
	}

	for(i = n-1; i >=loc-1; i--)
	{
		arr[i + 1] = arr[i];
		if(i == loc-1)
			arr[i] = x;
	}

	for(i = 0; i <=n ; i++)
		printf("%d ",arr[i]);

	return EXIT_SUCCESS;
}
