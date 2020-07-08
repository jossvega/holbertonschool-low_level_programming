#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input row
 * @height: input col
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **di;
	int y = 0, w = 0, x = 0, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* using typecasting (int *) to dereference values */
	di = malloc(height * sizeof(int *));
	if (di == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		di[y] = malloc(width * sizeof(int));
		if (di[y] == NULL)
		{
			for (h = 0; h < y; h++)
				free(di[h]);
			free(di);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (x = 0; x < width; x++)
			di[w][x] = 0;
	}
	return (di);
}
