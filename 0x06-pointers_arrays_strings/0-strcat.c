#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 *
 * @dest: Destination string for concatenation. src is appended to this string.
 * @src: Source string. This is appended to dest, overwriting its null byte \0.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	/* Declare variable to store length of concatenated string */
	int length;

	/* Move character pointer to end of first string and store its length */
	while (*dest != '\0')
	{
		dest++;
		length++;
	}

	/* Contatenate second string (src) to first string (dest), store length */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		length++;
	}

	/* Add null byte to indicate end of string/character array */
	*dest = '\0';

	/* Move character pointer back to the beginning of the string */
	dest -= length;

	/* Return a pointer to the new, concatenated string */
	return (dest);
}
