/*
 ============================================================================
 Name        : EX_3.1.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 3.1 (Find char frequency in string)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char x, str[100];
	int i, freq = 0;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x);

	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == x)
			freq++;
	}

	printf("\nFrequency of %c = %d", x, freq);

	return EXIT_SUCCESS;
}
