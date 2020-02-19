#include "holberton.h"

/**
*_atoi - function that convert a stringto an integer
*@s: pionter that pionts to string
*Return: integer
*/

int _atoi(char *s)
{
	int i;
	int value, sign;


	value = 0;
	sign = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] > '0' && s[i] < '9')
		{
			if (value < 0)
				value = (value * 10) - (s[i] - '0');
			else
				value = (s[i] - '0') * -1;
			if (s[i + 1] < '1' || s[i + 1] > '8')
				break;
		}
	}
	if (sign < 0)
		value = value * -1;
	return (value);
}
