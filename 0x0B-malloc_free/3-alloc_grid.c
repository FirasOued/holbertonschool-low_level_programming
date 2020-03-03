#include <stdlib.h>

/**
*alloc_grid - creates 2 dim array of integer (grid)
*@width: width of grid
*@height: height of grid
*Return: pointer to 2 dim array ( gird)
*/


int **alloc_grid(int width, int height)
{

	int i, j;
	int **p;

	i = j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(p));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{

			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
