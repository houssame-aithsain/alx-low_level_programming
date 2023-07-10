#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If successful, a pointer to the newly allocated grid.
 *         If memory allocation fails, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = 0;
	if (!width || !height || width < 0 || height < 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		j = 0;
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}
