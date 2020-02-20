#include "holberton.h"

/**
**_strcat - function that concatenates two strings
*Description: this This function appends the src string to the dest string
*overwriting the terminating null byte (\0) at the end of dest
*and then adds a terminating null byte
*@dest: pointer piont to string
*@src: pionter piont to string
*Return: return pionter to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;

	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}

