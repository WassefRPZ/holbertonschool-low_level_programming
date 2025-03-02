#include "main.h"
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: The string with capitalized words.
 *
 * Description: This function capitalizes the first letter of each word in
 * a string, where a word is defined as starting after one of the following
 * delimiters: ",;.!?(){}\n\t\" ". The function modifies the string in-place.
 */
char *cap_string(char *str)
{
	int i = 0, c;
	int trigger = 0;
	char nots[] = ",;.!?(){}\n\t\" ";

	while (str[i] != '\0')
	{
	if (i == 0 || trigger == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		trigger = 0;
	}
	}

	c = 0;
	while (nots[c] != '\0')
	{
		if (nots[c] == str[i])
	{
		trigger = 1;
	}
		c++;
	}

	i++;
	}

	return (str);
}
