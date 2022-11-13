#include "main.h"

/**
* print_line - Function that draws a straight line in the terminal.
*
* @n: Length of the line.
*/

void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');

	_putchar('\n');
}
