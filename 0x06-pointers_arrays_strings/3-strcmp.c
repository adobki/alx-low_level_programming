#include "main.h"

/**
 * _strcmp - A function that compares only the first character of two strings.
 *           Works like strcmp (strncmp with 1 passed as third parameter).
 *           Subtracts s2[0] from s1[0] thanks to C's internal ASCII conversion
 *
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: An integer that shows the difference between the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
