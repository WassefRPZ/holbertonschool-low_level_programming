#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Recherche la premire occurrence d'un caract  dans une chaîne,
 * parmi un ensemble de caractères donnés.
 * @s: Pointeur vers la chaîne dans laquelle rechercher les caractères.
 * @accept: Ensemble de caractères à rechercher dans la chaîne.
 *
 * Return: Un pointeur vers la première occurrence de l'un des caractères de
 * `accept` dans `s`, ou NULL si aucun caractère de `accept` n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{

int i = 0;
int j;


	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);

}

