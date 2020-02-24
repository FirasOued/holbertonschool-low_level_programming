#include "holberton.h"
#include <stdio.h>
/**
*_strspn - function that gets the lenght of a prefix substring
*@s: pointer piont to a string
*@accept: pointer point to string
*Return: number of characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
