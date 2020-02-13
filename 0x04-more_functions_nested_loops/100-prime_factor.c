#include <stdio.h>

/**
*main - main block
*Description: program that finds and prints the largest prime factor
*of the number 612852475143
*Return: 0
*/

int main(void)
{

	long i;
	long number = 612852475143;

	for (i = 2; i < number; i++)
	{
		while (number % i == 0)
			number /= i;
	}
	printf("%li\n", number);
	return (0);
}
