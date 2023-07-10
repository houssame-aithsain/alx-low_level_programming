#include "main.h"

/**
 * free_grid - Frees a 2D array of integers.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
