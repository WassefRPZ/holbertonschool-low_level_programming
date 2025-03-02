#include "main.h"
/**
 * puts2 - Affiche chaque autre caract d'une chaine.
 * @str: La chaîne de caractères à traiter.
 *
 * Description: Cette fonction prend en entre une chaine de caract et imprime
 * chaque autre caractde la chaine (commenant par le premier), puis affiche
 * un saut de ligne.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')

	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
		i++;
	}


	_putchar('\n');
}
