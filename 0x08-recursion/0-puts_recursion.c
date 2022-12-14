#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 *                   This is done using recursion in the function.
 *
 * @s: String to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
