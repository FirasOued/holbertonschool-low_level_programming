#include "holberton.h"
#include <stdlib.h>

/**
*_strstr - function that locate a substring
*@haystack: pointer point to a string
*@needle: poniter point to a string substring
*Return: Pointerto the beginning of the of substring, or NULL if not found.
*/

char *_strstr(char *haystack, char *needle)
{

	int i, j, k;

	k = 0;
	i = 0;

	while (haystack[i] != '\0')
	{

		j = 0;

		while (haystack[i + k] != '\0' && needle[j + k] != '\0'
		       && haystack[i + k] == needle[j + k] )

		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;

		}
		if (needle[j + k] == '\0')
			return (&haystack[i]);

		j++;
		i++;

	}
	return (NULL);
}
