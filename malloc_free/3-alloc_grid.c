#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - alloue une grille 2D et initialise chaque element à 0
 * @width: largeur de la grille
 * @height: hauteur de la grille
 *
 * Return: un pointeur vers la grille allouée, ou NULL en cas d'erreur.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **mano;

	if (width <= 0 || height <= 0)
	return (NULL);

	mano = malloc(height * sizeof(int *));
	if (!mano)
	return (NULL);

	for (i = 0; i < height; i++)
	{

		mano[i] = malloc(width * sizeof(int));
		if (!mano[i])
		{
			for (j = 0; j < i; j++)
			free(mano[j]);
			free(mano);
			return (NULL);

		}
	}

	for (i = 0; i < height; i++)
	{

		for (j = 0; j < width; j++)

		{

		mano[i][j] = 0;

		}

	}

return (mano);
}
