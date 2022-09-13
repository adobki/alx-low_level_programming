#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: Number whose sign is to be printed.
 *
 * Return: 1 if number is positive,
 *         0 if number is 0,
 *         -1 if number is negative.
 */
int print_sign(int n)
{
	/* Check if number is positive, then print + and return 1 */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	/* Check if number is exactly zero, then print and return 0 */
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	/* Number is negative, so print _ and return -1 */
	else
	{
		_putchar('-');
		return (-1);
	}
}
