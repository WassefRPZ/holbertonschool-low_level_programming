#include "main.h"
#include <stdio.h>
/**
*_sqrt_mano - mano function for calculating the square root
* @n: the number to find the square root of
* @racine: the current guess for the square root
* Return: The square root of n if it exists, otherwise -1.
*/
int _sqrt_mano(int n, int racine)
{
if (racine * racine > n)
return (-1);
if (racine * racine == n)
return (racine);
return (_sqrt_mano(n, racine + 1));
}
/**
*_sqrt_recursion - Computes the square root of a non-negative integer
* @n: the number to find the square root of
* Return: the square root of n if it exists, otherwise -1
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_mano(n, 1));
}
