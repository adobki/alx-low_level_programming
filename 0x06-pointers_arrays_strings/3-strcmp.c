#include "main.h"

/**
 * _strcmp - A function that compares two strings. Works like strcmp.
 *           Subtracts s2[i] from s1[i] thanks to C's built-in ASCII conversion
 *
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: An integer that shows the difference between the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);

	return (0);
}
