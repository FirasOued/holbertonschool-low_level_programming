#include "holberton.h"

/**
**string_toupper - function that changes all lowercases to uppercase of str
*@s: pointer piont to a string
*Return: s
*/

char *string_toupper(char *s)
{
	char c;
	int i = 0;

	while (s[i] != '\0')
	{
		c = s[i];
		if (c >= 'a' && c <= 'z')
			s[i] = s[i] - 32;
		i++;

	}
	return (s);
}
