#include <stdio.h>

/**
 * print_to_98 - Prints all whole numbers from given
 *               input to 98, separated by a comma then space.
 * @n: Given number to count from.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

