#include "main.h"

/**
* more_numbers - Function that prints the numbers from 0 to 14, 10 times.
*/

void more_numbers(void)
{
	int num, countr = 0;

	while (countr++ < 10)
	{
		num = '0';

		while (num <= '9' + 5)
			if (num > '9')
				_putchar('1'), _putchar(num++ - 10);
			else
				_putchar(num++);

		_putchar('\n');
	}
}
