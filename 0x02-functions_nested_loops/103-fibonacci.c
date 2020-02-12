#include <stdio.h>

/**
*main - main block
*Description: Print the sum of even Fibonacci numbers
*Return: 0
*/

int main(void)
{
	unsigned long n, p, xfib, sum, i;

	n = 1;
	p = 2;
	sum = 0;

	for (i = 0 ; i < 50 ; i++)
	{
		xfib = n + p;
		n = p;
		p = xfib;

		if (xfib % 2 == 0 && xfib < 4000000)
		{
			sum += xfib;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
