#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copie une zone de memoire d'une adresse source vers une adresse.
 * @dest: Pointeur vers la destination où les données seront copies.
 * @src: Pointeur vers la source d'où les données seront copies.
 * @n: Nombre de bytes à copier de `src` vers `dest`.
 *
 * Return: Retourne le pointeur vers la destination `dest` après la copie.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}
return (dest);
}
