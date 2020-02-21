#include "holberton.h"

/**
*print_number - function that prints an integer
*@n: Input number
*/

void print_number(int n)
{
	unsigned int k1, k2;

	int i, j, achar;



	i = 1;
	achar = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	k1 = n;
	k2 = n;

	while (k1 >= 10)
	{
		k1 = k1 / 10;
		i++;
	}
	for (j = 1; j < i; j++)
		achar = achar * 10;
	while (achar > 1)
	{
		_putchar((k2 / achar) % 10 + '0');
		achar /= 10;
	}
	_putchar(k2 % 10 + '0');
}
