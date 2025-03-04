#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Affiche une chaine de caracte  en utilisant la recursion.
 * @s: La chaine de caracte a  afficher.
 *
 * La fonction affiche la chaîne de caractères pointée par s,
 * caractère par caractère, en appelant la fonction récursivement.
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	 _puts_recursion(s + 1);

}
