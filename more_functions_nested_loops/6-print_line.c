#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of underscores ('_') of length n.
 * @n: The number of underscores to print.
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar ('_');
		i++;
	}

	_putchar('\n');
}
