#include "main.h"
/**
 * _puts - Affiche une chaine de caract suivie d'un saut de ligne
 * @str: La chaine de caract a afficher
 *
 * Description:
 * Cette fonction affiche la chaine de caract pointer par @str,
 * puis ajoute un saut de ligne a la fin.
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar (str[len]);
		len++;
	}
	_putchar ('\n');

}




