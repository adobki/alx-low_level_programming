#include "main.h"

/**
* print_most_numbers - Function that prints numbers from 0 to 9, except 2 & 4.
*/

void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
		if (num != '2' && num != '4')
			_putchar(num++);
		else
			num++;

	_putchar('\n');
}
