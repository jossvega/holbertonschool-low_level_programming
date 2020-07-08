#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: array to free
 * @height: height of the array
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
