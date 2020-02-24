#include "holberton.h"
#include <stdio.h>
/**
**_strchr - function that locates a character in a string
*@s: pointer piont to a string
*@c: the character to be found
*Return: a pointer to the first occurence of c else , return NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}
	return (NULL);
}
