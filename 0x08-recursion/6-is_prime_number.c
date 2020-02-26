#include "holberton.h"

/**
*is_prime_number - function that check if the input integer
*is a prime number or not
*@n: number to be cheked
*Return: return 1 if the number is prime, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (primeno(n, 2));
}




/**
*primeno - function help to check if given number is prime or not
*@n: number to be checked
*@i: start int
*Return: 1 if it's prime and 0 if not
*/

int primeno(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (primeno(n, i - 1));
		}
	}
}
