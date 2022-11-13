#include "main.h"

/**
* print_number - Fuction that prints an integer with _putchar, without
*                using arrays or pointers.
*
* @n: Integer to be printed.
*/

void print_number(int n)
{
	int used = 0, length = 1, countr, num, power;

	if (n < 0)
		n *= -1, _putchar('-');

	num = n;
	while (num / 10)
		num /= 10, length++;

	while (length--)
	{
		countr = length;
		power = 1;
		while (countr--)
			power *= 10;

		if (used == 0)
		{
			num = n / power;
			used = num;
		}
		else
		{
			num = (n / power) - (used * 10);
			used = used * 10 + num;
		}
		/* printf("%d [%d \\ %d]\n", num, used, power); */
		_putchar(num + '0');
	}
}
