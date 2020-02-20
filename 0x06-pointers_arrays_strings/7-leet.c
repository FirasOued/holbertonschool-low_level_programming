#include "holberton.h"

/**
**leet - function that encodes a string into 1337
*Description: Letters a and A should be replaced by 4
*Letters e and E should be replaced by 3
*Letters o and O should be replaced by 0
*Letters t and T should be replaced by 7
*Letters l and L should be replaced by 1
*@s: pionter piont to a string
*Return: string s
*/

char *leet(char *s)
{
	int i, j;
	char rep[] = "AaEeOoTtLl";
	char cd[] = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; rep[j] != '\0' ; j++)
		{
			if (s[i] == rep[j])
				s[i] = cd[j];
		}
	}
	return (s);
}
