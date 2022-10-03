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
	/* Declare variable to store length of source string */
	int length;

	/* Copy second string (src) to first string (dest) */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		length++;
		if (--n < 1)
			break;
	  }

	/* Copy null byte that indicates end of string/character array */
	*dest = *src;

	/* Move character pointer back to the beginning of the string */
	dest -= length;

	/* Return a pointer to the new, concatenated string */
	return (dest);
}
