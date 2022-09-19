#include "main.h"
/**
 * _puts - A function that prints a string then a new line to stdout.
 *
 * @str: String to be printed.
 */
void _puts(char *str)
{
	int strLen = 0;

	/* Loop through str character by character and print each one */
	while (str[strLen] != '\0')
		_putchar(str[strLen++]);

	/* Print new line character after string */
	_putchar('\n');
}
