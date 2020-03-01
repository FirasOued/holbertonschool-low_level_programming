#include <stdio.h>
#include <stdlib.h>

/**
*main - progrman that multiplies two numbers
*@argc: argument count
*@argv: pointer point to argument string
*Return: 0
*/

int main(int argc, char *argv[])
{
	int rest, i;
	char *p;
	int n;

	rest = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);

			if (!*p)
				rest += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", rest);
	return (0);
}
