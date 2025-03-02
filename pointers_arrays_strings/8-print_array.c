#include "main.h"
#include <stdio.h>
/**
 * print_array - Affiche les n premiers elements d'un tableau d'entiers.
 * @a: Le tableau d'entiers a afficher.
 * @n: Le nombre d'elements a afficher.
 *
 * Cette fonction parcourt les n premiers éléments du tableau `a` et les
 * affiche sur la même ligne, separes par une virgule et un espace. Apres
 * l'affichage, un saut de ligne est ajoute.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
	{
		printf(", ");

	}

	}

printf("\n");

}
