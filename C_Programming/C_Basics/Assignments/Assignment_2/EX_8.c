/*
 ============================================================================
 Name        : EX_8.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Basics assignment 2 EX 8 <<Simple Calculator>>
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char operator;
	float a, b;

	printf("Enter operator either '+' or '-' or '*' or '/': ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a, &b);

	switch(operator)
	{
	case '+':
		printf("%f + %f = %f", a, b, a + b);
	break;

	case '-':
		printf("%f - %f = %f", a, b, a - b);
	break;

	case '*':
		printf("%f * %f = %f", a, b, a * b);
	break;

	case '/':
		printf("%f / %f = %f", a, b, a / b);
	break;

	default:
		printf("Wrong operator!");
	break;
	}

	return EXIT_SUCCESS;
}
