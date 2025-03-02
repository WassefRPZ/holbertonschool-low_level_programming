#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A negative value if `s1` is less than `s2`,
 *         a positive value if `s1` is greater than `s2`,
 *         0 if the strings are equal.
 *
 * Compares the strings `s1` and `s2` character by character.
 * The comparison stops when the strings are equal or a mismatch is found.
 * If one string is a prefix of the other,
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
