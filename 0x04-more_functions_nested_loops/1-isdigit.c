#include "holberton.h"

/**
*_isdigit - function that checks for a digit ( 0 throught 9)
*@c: the digit to be checked
*Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
