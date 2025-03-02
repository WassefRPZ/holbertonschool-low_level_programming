#include "main.h"
/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string to which `src` will be appended.
 * @src: The source string to be appended to `dest`.
 *
 * Return: A pointer to the destination string `dest`.
 *
 * This function appends the string `src` to the string `dest`, modifying
 * `dest` in place, and ensures the result is null-terminated.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0;


	while (dest[i] != '\0')
	i++;


	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}


	dest[i] = '\0';

	return (dest);
}
