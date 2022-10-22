#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array of
 *              integers, with each element of the array initialized to 0.
 *
 * @width: Size of second dimension of array (columns).
 * @height: Size of first dimension of array (rows).
 *
 * Return: Pointer to an array of pointers (2D array).
 *         NULL on error OR width or height <= 0.
 */

int **alloc_grid(int width, int height)
{
	int row = height;
	int col = width;
	int **array;

	if (height < 1 || width < 1)
		return (NULL);

	/* Create first dimension of array (rows/height): array[] */
	array = malloc(height * sizeof(int *));
	if (!array)
		return (NULL);
	/* Create second dimension of array (columns/width): array[][] */
	while (row--)
	{
		array[row] = malloc(width * sizeof(int));
		if (!array[row])
		{
			while (row < height)
				free(array[row++]);
			free(array);
			return (NULL);
		}
	}

	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
			array[row][col++] = 0;
		row++;
	}

	return (array);
}
