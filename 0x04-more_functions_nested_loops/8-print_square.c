#include "main.h"

/**
* print_square - Function that prints a square.
*
* @size: Size of the printed square.
*/

void print_square(int size)
{
	int countr = 0, countr2 = size;

	if (size < 1)
		_putchar('\n');

	while (countr2-- > 0)
	{
		countr = 0;
		while (countr++ < size)
			_putchar('#');
		_putchar('\n');
	}
}
