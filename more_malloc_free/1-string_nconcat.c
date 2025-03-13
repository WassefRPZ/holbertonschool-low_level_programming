#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenate s1 with the first n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to copy from s2.
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *mano;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";


	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
	len2++;

	if (n >= len2)
	n = len2;

	mano = malloc((len1 + len2  + 1) * sizeof(char));

	if (!mano)
		return (NULL);

	for (i = 0; i < len1; i++)
	{

	mano[i] = s1[i];

	}

	for (i = 0; i <= n; i++)

	mano[len1 + i] = s2[i];

mano[len1 + len2] = '\0';
return (mano);
}
