#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * @c: The character to check.
 *
 * Description: This function takes a character as input and checks
 * whether it is a lowercase letter (between 'a' and 'z').
 * It returns 1 if the character is lowercase, otherwise returns 0.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
