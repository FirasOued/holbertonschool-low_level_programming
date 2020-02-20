#include "holberton.h"

/**
**cap_string - function that capitalizes all words of a string
*@s: pointer point to a string
*Return: s
*/

char *cap_string(char *s)
{

	int i = 1;
	int j;
	char aft[] = ",;.!?(){}\n\t\" ";


	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		for (j = 0 ; aft[j] != '\0'; j++)
			if (s[i - 1] == aft[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		i++;
	}
	return (s);
}
