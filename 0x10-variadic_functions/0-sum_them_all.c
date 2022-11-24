#include "variadic_functions.h"

/**
 * sum_them_all - A variadic function that returns the
 *                sum of all its parameters.
 *
 * @argc: Number of parameters passed to the function.
 *
 * Return: Sum of all the given integers.
 *         0 if argc is zero.
 */

int sum_them_all(const unsigned int argc, ...)
{
	unsigned int sum = 0, countr = 0;
	va_list argv;

	if (argc == 0)
		return (0);

	va_start(argv, argc);

	while (countr++ < argc)
		sum += va_arg(argv, int);

	va_end(argv);

	return (sum);
}
