#include "holberton.h"

/**
*print_last_digit - prints the last digit of a number
*@n: the number
*Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int p;

	if (n < 0)
	{
		n *= -1;
		p = n % 10;
		_putchar(p + '0');
		return (p);
	}
	else
	{
		p = n % 10;
		_putchar(p + '0');
		return (p);
	}

}

