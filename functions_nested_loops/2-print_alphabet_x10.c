#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 *
 * Description: This function prints the lowercase letters of the alphabet
 * from 'a' to 'z' 10 times, each followed by a newline.
 */

void print_alphabet_x10(void)
{
	int i;
	int r;

	i = 0;
	while (i < 10)
{
	r = 97;
	while (r <= 122)
{
	_putchar(r);
	r++;
	}
	_putchar('\n');
	i++;
	}
}
