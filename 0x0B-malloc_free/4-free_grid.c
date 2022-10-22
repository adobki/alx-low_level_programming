#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously created by
 *             my alloc_grid function.
 *
 * @grid: Pointer to a 2 dimensional array.
 * @height: Size of first dimension of array (rows).
 */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);

	free(grid);
}
