#include "main.h"
#include <stdio.h>
/**
* _prime_manno - Help function
* @n: Number we test
* @prime:  Variable diviser
* Return: Return 1 if the input integer is a prime number, otherwise return 0
*/
int _prime_mano(int n, int prime)
{
	if (n % prime == 0)
	return (0);
	if (prime * prime > n)
	return (1);
	return (_prime_mano(n, prime + 1));
}
/**
* is_prime_mano - Determines if an integer is a prime mano.
* @n: Number we test
* Return: Returns 1 if the input integer is a prime mano, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n < 2)
	return (0);
	return (_prime_mano(n, 2));
}
