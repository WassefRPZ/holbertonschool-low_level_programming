#include "main.h"
/**
 * rev_string - Inverse une chaîne de caractères en place.
 * @s: La chaîne de caractères à inverser.
 *
 * Description: Cette fonction prend en argument une chaîne de caractères
 * et inverse les caractères dans la chaîne, sans utiliser de mémoire
 * supplémentaire (le processus est effectué en place).
 */
void rev_string(char *s)
{
	char tmp;
	int start = 0;
	int len = 0;

		while (s[len] != '\0')
		{
			len++;
		}

		len--;

		while (start < len)
		{
			tmp = s[start];
			s[start] = s[len];
			s[len] = tmp;
			start++;
			len--;
		}

}
