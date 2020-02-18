#include "holberton.h"

/**
*rev_string - function that reverse a string
*@s: string to be reversed
*/

void rev_string(char *s)
{
	int j = 0;
	int i = 0;
	char a, b;

	while (s[i] != '\0')
		i++;

	i--;
	while (i > j)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		j++;
		i--;
	}
}
