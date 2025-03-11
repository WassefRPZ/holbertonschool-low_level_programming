#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Cree une copie d'une chaine de caracteres.
 * @str: Chaine a copier.
 *
 * Return: Pointeur vers la nouvelle chaine, ou NULL en cas d'erreur.
 */
char *_strdup(char *str)
{
	int i = 0;
	int l = 0;
	char *mano;

	if (str == NULL)
	return (NULL);

	while (str[l])
	l++;

	mano = malloc((l + 1) * sizeof(char));
	if (!mano)
	return (NULL);

	while (str[i] != '\0')
	{
	mano[i] = str[i];
	i++;
	}

	mano[i] = '\0';

	return (mano);
}
