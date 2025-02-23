#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The integer whose last digit is to be printed.
 *
 * Description: This function takes an integer as input, calculates
 * the last digit by using the modulo operator, and prints it.
 * If the number is negative, it converts the last digit to positive
 * before printing it.
 *
 * Return: The last digit of the input number (positive).
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
