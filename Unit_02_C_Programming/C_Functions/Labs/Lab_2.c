/*
 ============================================================================
 Name        : Lab_2.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Functions Lab 2 <Calculate minimum element in array>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcMin(int arr[], int n)
{
	int i, min = arr[0];

	for(i = 0; i < n; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}
	return min;
}

int main(void) {

	int arr[10] = {12, 30, -5, 88, 101, 122, 45, 2, 0, 81};

	printf("Minimum element = %d", calcMin(arr, 10));

	return EXIT_SUCCESS;
}
