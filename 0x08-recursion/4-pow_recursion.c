#include "holberton.h"

/**
*_pow_recursion - function that returns the value of first int raised
*to the power of seconde int
*@x: first integer
*@y: seconde integer
*Return: value of x rased by the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, (y - 1)));
}
