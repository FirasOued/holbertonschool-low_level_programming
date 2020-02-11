#include "holberton.h"

/**
*jack_bauer - function that prints every minute of the day from 00:00
*to 23:59
*Return: no return
*/

void jack_bauer(void)
{
	int n, p;

	for (n = 0 ; n <= 23 ; n++)
	{
		for (p = 0 ; p <= 59 ; p++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			_putchar('\n');
		}
	}


}
