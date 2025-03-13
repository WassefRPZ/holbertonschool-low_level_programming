#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Alloue de la memoire ou termine le programme si echec.
 * @b: Taille de la memoire en octets.
 *
 * Return: Pointeur vers la memoire allouee, ou termine avec statut 98.
 */
void *malloc_checked(unsigned int b)
{
	int *mano;

	mano = malloc(b);

	if (mano == NULL)
	{
		exit(98);

	}

	return (mano);

}
