#include "variadic_functions.h"

/**
 * printString - A separate function for printing strings to make parent
 *               function <= 40 lines, per ALX SE/Betty requirements.
 *
 * @str: String to be printed.
 * @separator: Separator to be used for printing the string.
 *
 * Return: Separator string for printing next variable.
 */

char *printString(const char * const str, char *separator)
{
	unsigned int isNull = 1;

	if (str)
		isNull = 0;

	switch (isNull)
	{
		case 0:
			printf("%s%s", separator, str);
			break;
		default:
			printf("%s(nil)", separator);
	}

	return (", ");
}

/**
 * print_all - A variadic function that prints anything passed to it as a
 *             parameter using a format string (which is a list of the data
 *             type(s) of the passed parameters). Output is comma-separated.
 *
 * @format: Format specifier string. Tells the function what/how to print.
 */

void print_all(const char * const format, ...)
{
	unsigned int countr = 0;
	char *tmpStr, *separator = "";
	va_list argv;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(argv, format);

	while (format[countr])
	{
		switch (format[countr++])
		{
			case 'c':
				printf("%s%c", separator, va_arg(argv, int));
				separator = ", ";
				break;

			case 'i':
				printf("%s%d", separator, va_arg(argv, int));
				separator = ", ";
				break;

			case 'f':
				printf("%s%f", separator, va_arg(argv, double));
				separator = ", ";
				break;

			case 's':
				tmpStr = va_arg(argv, char *);
				separator = printString(tmpStr, separator);
		}
	}
	printf("\n");

	va_end(argv);
}
