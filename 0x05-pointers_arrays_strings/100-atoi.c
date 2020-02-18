#include "holberton.h"

/**
*_atoi - function that convert a stringto an integer
*@s: pionter that pionts to string
*Return: integer
*/

int _atoi(char *s)
{
	int i;
	int k, sign;


	k = 0;
	sign = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] > 47 && s[i] < 58)		
		{
			k = 0;
		}
	}
	return (k);
}
