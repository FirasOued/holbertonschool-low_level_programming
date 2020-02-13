#include <stdio.h>

/**
*main - main block
*Description: prints the numbers from 1 to 100, followed by new line
*for multiples of three print Fizz instead of the number
*for the multiples of five print Buzz
*for numbers which are multiples of both three and five print FizzBuzz
*Return: 0
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0 && i % 3 != 0) 
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return (0);
}
