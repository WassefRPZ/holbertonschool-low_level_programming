#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Libere la memoire d'une grille 2D
 * @grid: Pointeur vers la grille 2D
 * @height: Nombre de lignes de la grille
 *
 * Cette fonction libere la memoire allouee pour chaque ligne
 * de la grille ainsi que la memoire du tableau de pointeurs
 * lui-meme.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{

	free(grid[i]);

	}

	free(grid);
}
