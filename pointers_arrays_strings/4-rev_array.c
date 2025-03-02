#include "main.h"
/**
 * reverse_array - Reverses an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * This function reverses the order of elements in the array `a`.
 * It swaps the elements from the start and end until it reaches the middle.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;


	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i++;
	}
}
