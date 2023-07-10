#include "main.h"

/**
 * ft_free - Frees a 2D array of integers.
 * @grid: The grid to be freed.
 * @h: The height of the grid.
 * @i: The width of the grid.
 */
void ft_free(int **grid, int h, int i)
{
	int w, x;

	w = 0;
	while (w < h)
	{
		x = 0;
		while (x < i)
			free(grid[w][x++]);
		free(grid[w++]);
	}
}

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
	if (!grid)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			ft_free(grid, height, i);
			return (NULL);
		}
		j = 0;
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	grid[i] = 0;
	return (grid);
}
