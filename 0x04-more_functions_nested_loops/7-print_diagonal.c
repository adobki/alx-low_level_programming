#include "main.h"

/**
* print_diagonal - Function that draws a diagonal line in the terminal.
*
* @n: Length of the line.
*/

void print_diagonal(int n)
{
	int countr = 0, countr2;

	if (n < 1)
		_putchar('\n');

	while (countr++ < n)
	{
		countr2 = 1;
		while (countr2++ < countr)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
