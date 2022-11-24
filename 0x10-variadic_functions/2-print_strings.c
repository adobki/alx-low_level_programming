#include "variadic_functions.h"

/**
 * print_strings - A variadic function that prints strings passed to it as
 *                 parameters. Strings are printed with a given separator,
 *                 provided the separator is not NULL.
 *
 * @argc: Number of parameters passed to the function.
 * @separator: A string to be printed between numbers.
 */

void print_strings(const char *separator, const unsigned int argc, ...)
{
	unsigned int countr = 0;
	char *tmpStr;
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
		{
			tmpStr = va_arg(argv, char *);
			if (tmpStr)
				printf("%s%s", tmpStr, separator);
			else
				printf("(nil)%s", separator);
		}
		tmpStr = va_arg(argv, char *);
		if (tmpStr)
			printf("%s\n", tmpStr);
		else
			printf("(nil)\n");
	}
	else
	{
		while (countr++ < argc)
		{
			tmpStr = va_arg(argv, char *);
			if (tmpStr)
				printf("%s", tmpStr);
			else
				printf("(nil)");
		}
		printf("\n");
	}
	va_end(argv);
}
