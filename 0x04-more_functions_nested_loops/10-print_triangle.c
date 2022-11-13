#include "main.h"

/**
* print_triangle - Function that prints a triangle.
*
* @size: Size of the printed triangle.
*/

void print_triangle(int size)
{
	int countr = 0, countr2 = 0;

	if (size < 1)
		_putchar('\n');

	while (countr++ < size)
	{
		countr2 = size - countr;
		while (countr2-- > 0)
			_putchar(' ');

		countr2 = countr;
		while (countr2-- > 0)
			_putchar('#');

		_putchar('\n');
	}
}
