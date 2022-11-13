#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: Destination string for copy. src is copied to this string.
 * @src: Source string. This is copied to dest.
 * @n: Number of characters to be copied from second string (src).
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* Declare variable to store beginning of destination string */
	char *destBck = dest;

	/* Copy second string (src) to first string (dest) */
	if (src)
		while (*src >= 0)
		{
			if (n-- < 1)
				break;

			*dest = *src;
			dest++;
			if (*src > 0)
				src++;
		}

	/* Return a pointer to the copied string */
	return (destBck);
}
