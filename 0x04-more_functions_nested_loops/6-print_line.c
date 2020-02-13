#include "holberton.h"

/**
*print_line - function that draws a straight line in the terminal
*@n: is the number of times teh character '_' will be printed
*/

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

	}
	_putchar('\n');

}
