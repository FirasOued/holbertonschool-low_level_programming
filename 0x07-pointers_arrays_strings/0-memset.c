#include "holberton.h"

/**
**_memset - function that fills memory with a constant byte
*@s: pionter to the block of memory to fill
*@b: constant byte
*@n: number of bytes to be filled
*Return: pointer to the memory area ss
*/

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
