#include "main.h"
/**
 * _strncat - Concatenate two strings up to a specified number of characters.
 * @dest: The destination string to which `src` will be appended.
 * @src: The source string to be appended to `dest`.
 * @n: The maximum number of characters from `src` to append to `dest`.
 *
 * Return: A pointer to the destination string `dest`, with the characters
 * from `src` appended (up to `n` characters).
 *
 * This function appends up to `n` characters from the string `src` to
 * the end of the string `dest`. If `src` has fewer than `n` characters,
 * it appends all characters from `src`. It ensures that the resulting
 * string is null-terminated.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;


	while (dest[i] != '\0')
	i++;


	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}



	dest[i] = '\0';

	return (dest);
}
