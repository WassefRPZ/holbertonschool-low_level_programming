#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (*needle == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
			j++;
			}

		if (needle[j] == '\0')
		{
		return (haystack + i);

		}

		i++;
	}

	return (NULL);
}
