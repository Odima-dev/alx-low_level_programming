#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid  - frees grid
 * @grid: the grid
 * @height: grids height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
