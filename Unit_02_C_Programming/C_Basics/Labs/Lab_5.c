/*
 ============================================================================
 Name        : Lab_5.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics Lab 5 <<Calculate average students degrees>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num_students, i;
	float degree, sum = 0;

	printf("Enter number of students: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num_students);

	for(i = 0; i < num_students; i++)
	{
		printf("Enter student %d degree: ", i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree);
		sum += degree;
	}

	printf("Students average degree = %f", sum / num_students);

	return EXIT_SUCCESS;
}
