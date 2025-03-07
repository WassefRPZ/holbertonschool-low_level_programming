#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Affiche les sommes des deux diagonales d'une matrice.
 * @a: Pointeur vers la matrice (tableau 1D).
 * @size: Taille de la matrice.
 *
 * La fonction affiche la somme des éléments des deux diagonales.
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);

}
