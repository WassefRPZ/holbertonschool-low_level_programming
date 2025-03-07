#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Affiche un échiquier 8x8.
 * @a: Pointeur vers une matrice 8x8 de caractères représentant l'échiquier.
 *
 * Retourne: Rien (affiche l'échiquier sur la sortie standard).
 */
void print_chessboard(char (*a)[8])
{
	int l = 0;
	int c = 0;

	while (l < 8)
	{
	c = 0;
	while (c < 8)
	{
		_putchar(a[l][c]);
		c++;
	}
	_putchar('\n');
	l++;

	}


}
