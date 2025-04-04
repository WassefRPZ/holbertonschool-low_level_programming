#include "main.h"
/**
 * _strncpy - Copy up to `n` characters from `src` to `dest`.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the destination string `dest`.
 *
 * Copies at most `n` characters from `src` to `dest`. If `src` is shorter
 * than `n`, the remaining characters in `dest` are filled with `'\0'`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}


	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
