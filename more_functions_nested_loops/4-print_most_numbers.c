#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 *
 * This function prints the digits from 0 to 9, but skips the numbers 2 and 4.
 * It does not return anything, as it is a void function.
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i !=  52)
	{
		_putchar(i);
	}
	i++;
	}
	_putchar('\n');

}
