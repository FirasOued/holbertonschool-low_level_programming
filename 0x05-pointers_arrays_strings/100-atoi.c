#include "holberton.h"

/**
*_atoi - function that convert a stringto an integer
*@s : pionter that pionts to string
*Return: integer
*/

int _atoi(char *s)
{
	int i, int_num;
	short sign, catch_it;


	i = int_num = 0;
	catch_it = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{


} 
