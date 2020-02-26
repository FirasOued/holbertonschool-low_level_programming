#include "holberton.h"

/**
*_sqrt_recursion - function that returns the natural square root of a number
*@n: number
*Return: natural square root
*/

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (square_root(1, n));

}


/**
*square_root - function that return square root of a number
*@i: n square root val
*@n: number to search it's square root
*Return: return value of square root or -1
*/

int square_root(int i, int n)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (square_root(i + 1, n));

}
