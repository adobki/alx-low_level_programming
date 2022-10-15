#include "main.h"

/**
 * _strlen_recursion - Function that returns length of a string.
 *
 * @s: String to be counted.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(++s));

	return (0);
}
