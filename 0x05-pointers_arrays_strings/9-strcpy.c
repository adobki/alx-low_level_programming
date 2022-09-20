#include "main.h"
/**
 * _strcpy - Copies a string to a buffer.
 *
 * @dest: Pointer to buffer of string destination.
 * @src: Pointer to string to be copied.
 *
 * Return: The pointer to the destination string, dest.
 */
char *_strcpy(char *dest, char *src)
{
	int countr = 0;

	/* Loop through each character in string src and copy each to dest */
	while (src[countr])
	{
		dest[countr] = src[countr];
		countr++;
	}

	/* Copy terminating null byte (\0) as well */
	dest[countr] = src[countr];

	/* Return pointer */
	return (dest);
}
