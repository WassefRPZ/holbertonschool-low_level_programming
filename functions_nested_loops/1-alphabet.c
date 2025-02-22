#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: This function prints the lowercase letters of the alphabet
 * from 'a' to 'z' followed by a newline character.
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}

