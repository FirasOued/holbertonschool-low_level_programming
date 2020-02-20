#include "holberton.h"

/**
**_strncpy - function that copies a string
*@dest: pointer piont to string
*@src: pointer point to string
*@n: number of byte from src
*Return: pointer to resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && n > i ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; n > i ; i++)
		dest[i] = '\0';
	return (dest);

}

