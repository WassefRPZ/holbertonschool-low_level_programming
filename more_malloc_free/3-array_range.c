#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create an array of integers from min to max (inclusive)
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return: pointer to the array, or NULL if allocation fails
 *         or if min is greater than max.
 */
int *array_range(int min, int max)
{
	int *mano;
	int i = 0;


	if (min > max)
	return (NULL);

	mano = malloc((max - min + 1) * sizeof(int));
	if (mano == NULL)
	return (NULL);

	while (min <= max)
	{

	mano[i] = min;
	min++;
	i++;

	}

return (mano);

}
