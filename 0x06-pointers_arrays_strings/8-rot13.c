#include "holberton.h"

/**
**rot13 - function that encodes a string to rot13
*@s: pointer point to a string
*Return: string encoded s
*/

char *rot13(char *s)
{
	int i, j;
	char al[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cd[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char b;


	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;

		for (j = 0; al[j] != '\0' && b == 0; j++)
		{
			if (s[i] == al[j])
			{
				s[i] = cd[j];
				b = 1;
			}
		}
	}
	return (s);
}

