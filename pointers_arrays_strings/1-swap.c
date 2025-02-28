#include "main.h"
/**
 * swap_int - the values of two integers.
 *
 * Description: This function swaps the values of the two integer variables
 * that are passed as pointers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
