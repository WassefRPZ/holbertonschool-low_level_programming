#include <stdio.h>
#include <stdlib.h>
#include"function_pointers.h"
/**
 * array_iterator - Applique une fonction sur chaque élément d'un tableau
 * @array: Tableau d'entiers
 * @size: Taille du tableau
 * @action: Fonction à appliquer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	action(array[i]);
	}
}
