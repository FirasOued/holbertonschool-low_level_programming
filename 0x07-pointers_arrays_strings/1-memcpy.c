#include "holberton.h"

/**
**_memcpy - function that copies memory area
*@dest: memory area
*@src: memory area
*@n: number of butes to be copied
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n - 1 ; i++)
		dest[i] = src[i];

	return (dest);
}
