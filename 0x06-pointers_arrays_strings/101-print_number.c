#include "main.h"
#include <limits.h>

/**
 * print_number - Function that prints an integer using only _putchar.
 *
 * @n: Integer to be printed.
 */
void print_number(int n)
{
	int n2 = n, length = 1, countr, isMIN = 0;

	/* Check if given input is zero. Print zero and exit if true */
	if (n == 0)
	{
		_putchar(n + 48);
		return;
	}

	/* Check if given input is negative and fix it */
	if (n < 0)
	{
		_putchar(45);
		if (n == INT_MIN)
			isMIN = 1, n = INT_MAX, n2 = n;
		else
			n *= -1, n2 = n;
	}

	/* Find total number of digits in given integer */
	while (n2 != 0)
		n2 /= 10, ++length;

	while (--length)
	{
		/* Get first digit from integer*/
		n2 = n;
		for (countr = 1; countr < length; countr++)
			n2 /= 10;

		/* Fix for INT_MIN. Unsigning INT_MIN = -1. This adds +1 back */
		if (length == 1)
			n2 += isMIN;

		/* Print and remove the digit from given integer */
		_putchar(n2 + 48);
		for (countr = 1; countr < length; countr++)
			n2 *= 10;
		n -= n2;
	}
}
