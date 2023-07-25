/*
 ============================================================================
 Name        : EX_3.2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Array & Strings EX 3.2 (Find string length)
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str[100];
	int i, length = 0;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i = 0; i < 100; i++)
	{
		if(str[i] == 0)
			break;
		length++;
	}

	printf("\nLength of string = %d", length);

	return EXIT_SUCCESS;
}
