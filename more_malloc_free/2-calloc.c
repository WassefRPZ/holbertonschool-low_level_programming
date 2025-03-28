#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: a pointer to the allocated memory, or NULL if allocation fails
 *         or nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mano;
	unsigned int i;
	unsigned char *wassef;


	if (nmemb == 0 || size == 0)
	return (NULL);

	mano = malloc(nmemb * size);
	if (mano == NULL)
	return (NULL);



	wassef = (unsigned char *)mano;
	for (i = 0; i < (nmemb * size); i++)
		wassef[i] = 0;
	return (mano);

}
