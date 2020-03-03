#include <stdlib.h>
#include "holberton.h"


/**
*create_array - function that create an array of chars and initializes it
*@size: size of the array
*@c: character
*Return: pointer the array
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		s[i] = c;

	return (s);
}
