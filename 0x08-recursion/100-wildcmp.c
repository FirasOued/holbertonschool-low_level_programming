#include "holberton.h"

/**
*wildcmp - function that compares two string if there identical or not
*@s1: pointer point to a string
*@s2: poniter pointer to a string
*Return: return 1 if idetical and 0 if not
*/


int wildcmp(char *s1, char *s2)
{
	int two;

	if (*s1 == ' ')
	{
		two = wildcmp(s1 + 1, s2);
		return (two);
	}
	if (*s2 == ' ')
	{
		two = wildcmp(s1, s2 + 1);
		return (two);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	if (*s1 == '\0')
	{
		return (_strlen_recursion(s2));
	}
	if (*s2 == '\0')
	{
		return (_strlen_recursion(s1));
	}
	two = wildcmp(s1 + 1, s2 + 1);
	if (*s1 == *s2)
	{
		return (two);
	}
	else
		return (two + 1);
}


/**
*_strlen_recursion - function that returns the lenght of string
*@s: pointer point to a string
*Return: the lenght of a string s
*/

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));

	else
	{
		return (0);
	}
}
