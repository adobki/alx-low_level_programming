#include "main.h"

/**
 * strLen - Function that returns length of a string.
 *
 * @s: String to be counted.
 *
 * Return: Length of the string.
 */
int strLen(char *s)
{
	if (*s)
		return (1 + strLen(++s));

	return (0);
}

/**
 * printRev - Function that prints a string backwards with recursion.
 *
 * @s: String to be printed backwards.
 * @length: Length of string to be printed backwards.
 */
void printRev(char *s, int length)
{
	if (length)
	{
		printf("%c", *s--);
		printRev(s, --length);
	}
}

/**
 * _print_rev_recursion - Function that prints a string, followed by a new line
 *
 * @s: String to be printed.
 */
void _print_rev_recursion(char *s)
{
	int length = strLen(s);

	s += length - 1;
	printRev(s, length);
}
