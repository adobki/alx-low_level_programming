#include "main.h"

/**
 * _isalpha - Print a-z ten times, followed by a new line character.
 *
 * @c: Character to be checked for alpabet.
 *
 * Return: 1 if lowercase/uppercase alpabet, 0 otherwise
 */
int _isalpha(int c)
{
	/* Check if character is alphabet, then return appropriate value */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
