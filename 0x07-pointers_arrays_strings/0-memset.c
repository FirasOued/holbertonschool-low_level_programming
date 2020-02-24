#include "holberton.h"

/**
**_memset - function that fills memory with a constant byte
*@s: pionter to the block of memory to fill
*@b: constant byte
*@n: number of bytes to be filled
*Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n - 1 ; i++)
		s[i] = b;

	return (s);
}
