#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: 2D array
 * @height: number of rows
 *
 * Return:0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
