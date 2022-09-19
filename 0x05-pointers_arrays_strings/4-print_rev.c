#include "main.h"
/**
 * print_rev - Prints a string backwards to stdout then a new line.
 *
 * @s: String to be printed backwards.
 */
void print_rev(char *s)
{
	int strLen = 0;

	/* Loop through s character by character to get its length */
	while (s[strLen] != '\0')
		strLen++;

	/* Loop through s backwards character by character and print each one */
	while (strLen >= 0)
		_putchar(s[--strLen]);

	/* Print new line character after string */
	_putchar('\n');
}
