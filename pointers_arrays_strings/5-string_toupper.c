#include "main.h"
#include "holberton.h"

/**
 * *string_toupper - Converts all lowercase letters of a string to uppercase.
 * @c: The string to be converted.
 *
 * Return: A pointer to the converted string.
 *
 * This function iterates through each character of the string `c`,
 * converting all lowercase letters to uppercase by subtracting 32
 * from their ASCII value.
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
