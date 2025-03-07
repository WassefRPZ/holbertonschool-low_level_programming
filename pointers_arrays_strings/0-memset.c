#include "main.h"
/**
 * _memset - Remplie une zone mémoire avec un certain caractère.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Caractère avec lequel remplir la zone mémoire.
 * @n: Nombre de fois à remplir la zone mémoire.
 *
 * Return: Retourne le pointeur vers la zone mémoire modifiée.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		(s[i] = b);
		i++;
	}

return (s);

}
