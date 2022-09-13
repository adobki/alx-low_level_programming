#include "main.h"

/**
 * print_times_table - Prints times table of input given
 *
 * @n: Times table to be printed.
 */
void print_times_table(int n)
{
	int countr, countr2, result;

	if (n >= 0 && n <= 15)
	{
		for (countr = 0; countr <= n; countr++)
		{
			_putchar('0');

			for (countr2 = 1; countr2 <= n; countr2++)
			{
				_putchar(',');
				_putchar(' ');

				result = countr * countr2;

				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
