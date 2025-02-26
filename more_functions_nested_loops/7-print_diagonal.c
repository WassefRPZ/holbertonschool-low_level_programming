#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Function to print a diagonal pattern
 * @n: The number of times the character '\\' should be printed.
 *
 * Description:
 * This function prints a diagonal pattern of '\\' characters.
 * Each line of the diagonal is printed with spaces leading to the backslash.
 * If n is less than or equal to 0, the function does nothing.
 * Otherwise, it prints n lines.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
	putchar('\n');
	}
		for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
	{
		putchar(' ');
		j++;
	}

	putchar('\\');
	putchar('\n');
	}
}
