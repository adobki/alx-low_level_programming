#include "main.h"

/**
 * times_table - Prints the 9 times table from 0.
 */
void times_table(void)
{
	int x, a, b;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (a = 1; a <= 9; a++)
		{
			_putchar(',');
			_putchar(' ');

			b = x * a;

			if (b <= 9)
				_putchar(' ');
			else
				_putchar((b / 10) + '0');

			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
