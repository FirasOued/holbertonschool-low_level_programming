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
	int i, radd;

	radd = 0;
	if (argc >= 3)
	{
		i = 1;
		while (i < argc)
		{
			if (atoi(argv[i]) > 0)
			{
				radd += atoi(argv[i]);
				i++;
			}
		}
		printf("%d\n", radd);

		for (i = 1 ; i < argc ; i++)
		{
			if (!(atoi(argv[i]) >= 0))
			{
				printf("Error\n");
				break;
			}
		}
	}
	else if (argc == 1)
		printf("0\n");

	return (0);
}
