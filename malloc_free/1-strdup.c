#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	int i = 0;
	int l = 0;
	char *mano;

	if (str == NULL)
	return (NULL);

	while (str[l])
	l++;

	mano = malloc((l + 1) * sizeof(char));
	if (!mano)
	return (NULL);

	while ( str[i] != '\0')
	{
	mano[i] = str[i];
	i++;
	}

	mano[i] = '\0';

	return ( mano);
}
