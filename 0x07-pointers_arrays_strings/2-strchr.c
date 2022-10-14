#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: A pointer to the character in string,
 *         NULL if the character wasn't found.
 */

char *_strchr(char *s, char c)
{
	char *loc = s;

	while (*loc)
	{
		if (*loc == c)
			return (loc);

		loc++;
	}

	/* Check if c is null byte and return string's null byte */
	if (*loc == c)
		return (loc);

	/* Character not found in string. Return NULL */
	return ('\0');
}
