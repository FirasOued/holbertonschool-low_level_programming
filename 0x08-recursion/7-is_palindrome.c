#include "holberton.h"
#include <string.h>

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
*checkPalindrome - check if a string is pal
*@s: po,iter point to a string
*@index: index (0)
*Return: 1 if is pal and 0 if not
*/

int checkPalindrome(char *s, int index)
{
	int len = strlen(s) - (index + 1);

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
