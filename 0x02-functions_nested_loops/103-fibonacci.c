#include <stdio.h>

/**
*main - main block
*Description: Print the sum of even Fibonacci numbers, not exceeding 4000000
*Return: 0
*/

int main(void)

{

	int n = 1, p = 2, sum = 0;
	int k;


	while (p < 4000000)
	{

		if (p % 2 == 0)
			sum += p;

		k = p;
		p += n;
		n = k;

	}
	printf("%d\n", sum);
	return (0);
}
