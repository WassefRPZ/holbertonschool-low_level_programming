#include "main.h"
/*
 * *_memset - Remplie une zone memoire avec une valeur donnee.
 *
 * @s: Pointeur vers la zone memoire a remplir.
 * @c: Valeur à remplir dans la zone memoire (convertie en unsigned char).
 * @n: Nombre de bytes a remplir.
 *
 * Retourne le pointeur vers la zone memoire initiale @s.
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
