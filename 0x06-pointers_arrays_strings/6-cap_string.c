#include "holberton.h"

/**
**cap_string - function that capitalizes all words of a string
*@s: pointer point to a string
*Return: s
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else if (s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else if (s[i] == '{' || s[i] == '}' || s[i] == '\t' || s[i] == '\n')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}
