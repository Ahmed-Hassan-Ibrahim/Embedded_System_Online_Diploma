/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics Lab 1 <<Calculate circle area or circumference>>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float pie = 3.14159, radius;
	char choice;

	printf("Enter radius value: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);

	printf("Enter \"a\" for area or \"c\" for circumference: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &choice);

	if(choice == 'a' || choice =='A')
		printf("The area: %f", pie * radius * radius);

	else if(choice == 'c' || choice == 'C')
		printf("The circumference: %f", 2 * pie * radius);

	else
		printf("Wrong input!");

	return EXIT_SUCCESS;
}
