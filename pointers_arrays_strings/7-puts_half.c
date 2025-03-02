#include "main.h"
/**
 * puts_half - Affiche la deuxieme moitier d'une chaine de caract.
 * @str: La chaîne de caractères dont on veut afficher la deuxieme moitier.
 *
 * Cette fonction calcule la longueur de la chaîne `str`, puis détermine
 * le point de départ pour afficher la seconde moitier�de la chaine. Si la
 * longueur de la chaîne est paire, la seconde moitier commence a partir
 * du caract a  l'indice `len / 2`. Si la longueur est impaire, la
 * seconde moitier commence a partir de l'indice `(len + 1) / 2`.
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
