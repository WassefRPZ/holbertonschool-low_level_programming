#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * This function prints the numbers from 0 to 9 to the standard output.
 * It takes no arguments and does not return anything.
 */
void print_numbers(void)

{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
