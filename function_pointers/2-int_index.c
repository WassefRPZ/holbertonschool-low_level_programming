#include <stdio.h>
#include <stdlib.h>
#include"function_pointers.h"
/**
 * int_index - Trouve l'index du premier élément qui satisfait cmp
 * @array: Tableau d'entiers
 * @size: Taille du tableau
 * @cmp: Fonction de comparaison
 *
 * Return: Index du premier élément correspondant, ou -1 si aucun ou invalide
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
return (-1);

}
