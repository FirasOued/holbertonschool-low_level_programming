#include "holberton.h"
/**
*print_sign - function that prints the sign of a number
*@n: number to check its sign
*Return: 1 if n is greater tnak zero, 0 if n is zero and -1 if n is less than zero
*/

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0 )
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

