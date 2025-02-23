#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to check.
 *
 * Description: This function takes an integer as input, checks
 * whether it is greater than, less than, or equal to zero, and
 * prints the corresponding sign: '+' for positive, '0' for zero,
 * and '-' for negative. It also returns an integer corresponding
 * to the sign: 1 for positive, 0 for zero, and -1 for negative.
 *
 * Return: 1 if the number is positive, 0 if it is zero, and -1 if
 * the number is negative.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
