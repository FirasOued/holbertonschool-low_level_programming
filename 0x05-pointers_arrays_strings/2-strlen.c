#include "holberton.h"


/**
*_strlen - function that count the lenght of a string
*@s: string
*Return: the lenght of the string
*/

int _strlen(char *s)
{
	int lenght, count = 0;

	while (s[count] != '\0')
		count++;

	lenght = count;

	return (lenght);

}
