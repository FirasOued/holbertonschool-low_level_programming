#include "holberton.h"
/**
*_abs - function that computes the absolute value of an integer
@i: the integer to be computed
Return: the absolute value of the integer
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);

}

