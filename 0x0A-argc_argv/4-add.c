#include "main.h"

/**
 * hasSymbol - Function checks if a string contains only a positive integer.
 *             Symbols = Letters, special characters (+/-, #, /, etc.).
 *             NOTE: Function assumes that given string is not empty.
 *
 * @c: String to be checked for symbols.
 *
 * Return: 1 on success (symbol found),
 *         0 on error/failure (no symbols found).
 */

int hasSymbol(char *c)
{
	while (*c)
		if (!isdigit(*c++))
			return (1);

	return (0);
}

/**
 * main - Program that adds positive numbers passed from the commandline.
 *        If no number is passed, print 0, followed by a new line. If a number
 *        contains symbols/not digits, print Error, new line, and return 1.
 *        NOTE: Assume that the two numbers and result are all integers.
 *
 * @argc: Number of arguments passed to program from commandline.
 * @argv: Array of strings of passed arguments.
 *
 * Return: 0 on success,
 *         1 on error from invalid or no input(s)
 */

int main(int argc, char *argv[])
{
	int countr;
	int sum = 0;

	for (countr = 1; countr < argc; countr++)
	{
		if (hasSymbol(argv[countr]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[countr]);
	}

	printf("%d\n", sum);

	if (argc < 3)
		return (1);

	return (0);
}
