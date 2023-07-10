/*
 ============================================================================
 Name        : Lab_4.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics Lab 4 <<Calculate the summation of values between 1 and 99>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, sum = 0;

	for(i = 1; i <= 99; i++)
	{
		sum += i;
	}

	printf("Summation from 1 to 99 = %d", sum);

	return EXIT_SUCCESS;
}
