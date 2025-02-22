#include "main.h"

/**
 * main - print_alphabet
 *
 * Return: Always (Success)
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

