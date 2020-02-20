#include "holberton.h"

/**
**_strncat - function that concatenates two strings
*Description: The _strncat function is similar to the _strcat function
*it will use at most n bytes from src
*src does not need to be null-terminated if it contains n or more bytes
*@dest: pionter point to a string
*@src: pointer point to a string
*@n: number of bytes from src
*Return: return a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;

	for (j = 0 ; src[j] != '\0' && n > 0 ; j++)
	{
		dest[i] = src[j];
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
