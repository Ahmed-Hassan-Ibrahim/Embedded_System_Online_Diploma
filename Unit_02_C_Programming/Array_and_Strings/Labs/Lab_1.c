/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array and Strings Lab 1 (Store and print 10 students)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	float arr[10];

	for(i = 0; i < 10; i++)
	{
		printf("Enter student %d degree: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}

	for(i = 0; i < 10; i++)
	{
		printf("Student %d degree: %f\n", i + 1, arr[i]);
	}

	return EXIT_SUCCESS;
}
