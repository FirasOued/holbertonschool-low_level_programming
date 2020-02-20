#include "holberton.h"

/**
*_strcmp - function that compares two strings
*@s1: pionter piont to string
*@s2: pointer point to string
*Return: comparesation n
*/


int _strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		n = s1[i] - s2[i];

		if (n == 0)
			i++;
		else
			break;
	}
	return (n);


}
