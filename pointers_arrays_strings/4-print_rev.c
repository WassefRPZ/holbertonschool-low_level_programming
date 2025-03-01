#include "main.h"
/**
 * print_rev - Affiche une chne caracte a l'envers suivie d'un saut de ligne.
 * @s: La chaine de caracte inverser et afficher.
 *
 * Description: Cette fonction prend une chaîne de caractères en argument,
 * puis affiche les caractères dans l'ordre inverse suivi d'un saut de ligne.
 */
void print_rev(char *s)
{
	int len = 0;
		while (s[len] != 0)
		{
			len++;
		}
		while (len > 0)
		{
			len--;
			_putchar(s[len]);
		}

	_putchar('\n');

}
