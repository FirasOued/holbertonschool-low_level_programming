#include "holberton.h"

/**
*is_palindrome - function that check if a string is palindrom or not
*@s: pointer point to string
*Return: return 1 if s is palindrom and 0 if not
*/

int is_palindrome(char *s)
{
	return (checkPalindrome(s, 0));
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

/**
*checkPalindrome - check if a string is pal
*@s: po,iter point to a string
*@index: index (0)
*Return: 1 if is pal and 0 if not
*/

int checkPalindrome(char *s, int index)
{
	int len = _strlen_recursion(s) - (index + 1);

	if (s[index] == s[len])
	{
		if (index + 1 == len || index == len)
		{
			return (1);
		}
		return (checkPalindrome(s, index + 1));
	}
	else
	{
		return (0);
	}
}
