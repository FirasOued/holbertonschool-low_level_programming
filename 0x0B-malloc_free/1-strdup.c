#include <stdlib.h>
#include "holberton.h"


/**
*_strdup - function that returns a pointer to a newly allocated space in mry
*contains a copy ofa string
*@str: pointer point to a string
*Return: pointer the array
*/

char *_strdup(char *str)
{
	char *s;
	unsigned int lngh, i;

	if (str == NULL)
		return (NULL);

	for (lngh = 0 ; str[lngh] != '\0' ; lngh++)
		;

	lngh++;
	if (lngh < 1)
		return (NULL);

	s = malloc(lngh);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0 ; i < lngh ; i++)
		s[i] = str[i];

	s[i] = '\0';
	return (s);
}
