#include "main.h"

/**
 * _strncat - A function that concatenates two strings, using at most
 *            the specified number of bytes from the second string.
 *
 * @dest: Destination string for concatenation. src is appended to this string.
 * @src: Source string. This is appended to dest, overwriting its null byte \0.
 * @n: Specified number of characters to be copied from second string (src).
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	/* Declare variable to store length of concatenated string */
	int length;

	/* Move character pointer to end of first string and store its length */
	while (*dest)
	{
		dest++;
		length++;
	}

	/* Contatenate second string (src) to first string (dest), store length */
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		length++;

		/* Stop if specified number of characters have been copied from src */
		if (--n <= 0)
			break;
	}

	/* Add null byte to indicate end of string/character array */
	*dest = '\0';

	/* Move character pointer back to the beginning of the string */
	dest -= length;

	/* Return a pointer to the new, concatenated string */
	return (dest);
}
