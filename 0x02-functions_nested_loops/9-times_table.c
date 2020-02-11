#include "holberton.h"

/**
*times_table - function that prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int i, p, k, first_digit, last_digit;

	for (i = 0 ; i <= 9 ; i++)
	{

		for (p = 0 ; p <= 9 ; p++)
		{
			k = i * p;
			if (p != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k >= 10)
			{
				first_digit = k / 10;
				last_digit = k % 10;
				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
			}
			else if (k < 10 && p != 0)
			{
				last_digit = k % 10;
				_putchar(' ');
				_putchar(last_digit + '0');
			}
			else
			{
				last_digit = k % 10;
				_putchar(last_digit + '0');
			}
		}
		_putchar('\n');
	}

}

