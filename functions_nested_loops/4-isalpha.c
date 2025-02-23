#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to check.
 *
 * Description: This function takes an integer as input (representing
 * a character), and checks if it is an alphabetic letter, either
 * uppercase (A-Z) or lowercase (a-z).
 * It returns 1 if the character is an alphabetic letter, otherwise
 * it returns 0.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
