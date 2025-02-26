#include "main.h"
#include <stdio.h>
/**
 * print_square - Prints a square using the '#' character.
 * @size: The size of the square (number of rows and columns).
 *
 * This function prints a square of the given size, using the '#' character.
 * If size is less than or equal to 0, it simply prints a newline.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 0; i <= size; i++)
		{

			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
		_putchar('\n');
		}
	}
}
