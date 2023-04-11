#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated previusly
 *
 * @grid: arg one
 * @height: arg two
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
