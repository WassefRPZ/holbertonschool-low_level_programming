#include "main.h"
#include <stddef.h>
/**
 * _strchr - Trouve la première occurrence d'un caractère dans une chaîne.
 * @s: Pointeur vers la chaîne dans laquelle chercher le caractère.
 * @c: Le caractère à rechercher.
 *
 * Return: Un pointeur vers la première occurrence de `c` dans `s`,
 *         ou NULL si `c` n'est pas trouvé.
 */
char *_strchr(char *s, char c)
{

	int i = 0;

	if ( c == '\0')
	return (s);

	while (s[i] != '\0')
	{

	if (s[i] == c)

	{
	return (s + i);
	}

	i++;

	}


	return (NULL);
}
