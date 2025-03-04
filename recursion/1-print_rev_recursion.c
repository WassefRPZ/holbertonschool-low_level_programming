#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Affiche une chaine de caracte.
 * @s: La chaine de caracte a  afficher.
 *
 * La fonction affiche la chaîne de caractères pointée par s,
 * caractère par caractère, en appelant la fonction récursivement.
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	 _print_rev_recursion(s + 1);
	_putchar(*s);
}
