#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * @c: Character to be checked for case.
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* Check if character is lowercase, then return appropriate value */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
