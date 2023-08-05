/*
 ============================================================================
 Name        : Lab_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Functions Lab 3 <Find name in array of names>
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findName(char names[][14], int n, char input[])
{
	int i;

	for(i = 0; i < n; i++)
	{
		if(!strcmp(names[i], input))
			return 1;
	}
	return 0;
}

int main(void) {

	char input[14];
	char names[5][14] = {"Alaa", "Osama", "Mamdouh", "Samy", "Hossain"};

	printf("Enter your first name: ");
	fflush(stdin); fflush(stdout);
	gets(input);

	if(findName(names, 5, input) == 1)
		printf("Welcome!");
	else
		printf("Goodbye");

	return EXIT_SUCCESS;
}
