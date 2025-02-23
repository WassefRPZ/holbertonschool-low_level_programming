#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer to check.
 *
 * Description: This function takes an integer as input and returns its
 * absolute value. The absolute value of a number is its distance from
 * zero, regardless of whether the number is positive or negative.
 * If the number is already positive or zero, it is returned as is.
 * If the number is negative, the negative sign is removed and the positive
 * value is returned.
 *
 * Return: The absolute value of the number.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
