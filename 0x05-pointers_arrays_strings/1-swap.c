#include "holberton.h"

/**
*swap_int - function that swaps the values of two integers
*@a: interger
*@b: integer
*/

void swap_int(int *a, int *b)
{
	int k, p;

	k = *a;
	p = *b;

	*a = p;
	*b = k;
}
