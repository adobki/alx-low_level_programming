#include "main.h"

/**
 * print_diagsums - Function that prints the sum of the two diagonals
 *                  of a square matrix of integers.
 *
 * @a: A pointer to a two dimensional array with 8 rows [and columns].
 * @size: Size of square matrix a points to.
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int col = 0;
	int index = 0;
	int index2 = size - 1;
	int sum = 0;
	int sum2 = 0;
	int *str = a;

	while (row++ < size)
	{
		while (col < size)
		{
			if (col == index)
				sum += *str;
			if (col == index2)
				sum2 += *str;
			col++;
			str++;
		}

		col = 0;
		index++;
		index2--;
	}

	printf("%d, %d\n", sum, sum2);
}
