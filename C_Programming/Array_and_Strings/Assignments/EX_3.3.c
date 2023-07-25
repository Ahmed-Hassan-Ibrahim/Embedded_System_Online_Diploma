/*
 ============================================================================
 Name        : EX_3.3.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 3.3 (Reverse string)
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[100], rev_str[100];
	int i;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i = 0; i < strlen(str); i++)
	{
		rev_str[(strlen(str) - 1) - i] = str[i];
	}
	printf("\nReverse string is: ");

	for(i = 0; i < strlen(str); i++)
	{
		printf("%c", rev_str[i]);
	}

	return EXIT_SUCCESS;
}
