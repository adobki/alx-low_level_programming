#include "variadic_functions.h"

/**
 * print_numbers - A variadic function that prints numbers passed to it as
 *                parameters. The numbers are printed with a given separator,
 *                provided the separator is not NULL.
 *
 * @argc: Number of parameters passed to the function.
 * @separator: A string to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int argc, ...)
{
	unsigned int countr = 0;
	va_list argv;

	if (argc == 0)
	{
		printf("\n");
		return;
	}

	va_start(argv, argc);

	if (separator)
	{
		while (countr++ < argc - 1)
			printf("%d%s", va_arg(argv, int), separator);
		printf("%d\n", va_arg(argv, int));
	}
	else
	{
		while (countr++ < argc)
			printf("%d", va_arg(argv, int));
		printf("\n");
	}

	va_end(argv);
}
