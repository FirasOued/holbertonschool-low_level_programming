#include "holberton.h"
/**
*_isalpha - function that checks for alphabetic character
*@c: character to be cheched
*Return: 1 if c a letter (lowercase or uppercase) and 0 otherwise
*/

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	
	else
		return (0);


}

