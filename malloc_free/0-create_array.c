#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Cree un tableau de caracteres initialise avec un caractere.
 * @size: Taille du tableau.
 * @c: Caractere a utiliser pour l'initialisation.
 *
 * Return: Pointeur vers le tableau ou NULL en cas d'erreur.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	while (i < size)
	{
	array[i] = c;
	i++;
	}
return (array);
}
