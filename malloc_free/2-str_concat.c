#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated space containing
 *         the concatenated string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *mano;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";


	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
	len2++;

	mano = malloc((len1 + len2  + 1) * sizeof(char));

	if (!mano)
		return (NULL);

	for (i = 0; i < len1; i++)
	{

		mano[i] = s1[i];

	}

	for (i = 0; i < len2; i++)
	{

		mano[len1 + i] = s2[i];

	}


	mano[len1 + len2] = '\0';
return (mano);
}
