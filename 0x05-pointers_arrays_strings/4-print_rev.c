#include "holberton.h"

/**
*print_rev - function that print a string in reverse followed by new line
*@s: string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i-- ; i >= 0 ; i--)
		_putchar(s[i]);

	_putchar('\n');


}
