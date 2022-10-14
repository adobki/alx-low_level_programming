#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 *
 * @dest: Pointer to copied data
 * @src: Pointer to memory area to be copied
 * @n: Number of bytes to be copied
 *
 * Return: A pointer to the memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest2 = dest;
	char *src2 = src;

	while (n--)
	{
		*dest2++ = *src2++;
	}

	return (dest);
}
