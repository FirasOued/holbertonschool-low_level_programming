#include "holberton.h"

/**
**_strcpy - function that copies the string pointed to by src
*to the buffer pointed to by dest
*@dest: pionter piont copied char
*@src: pionter to copied char
*Return: the pionter to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);

}
