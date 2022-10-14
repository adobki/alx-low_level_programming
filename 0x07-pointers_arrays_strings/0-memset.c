#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: Pointer to filled memory
 * @b: Byte to be filled with
 * @n: Number of bytes in memory to fill
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
	{
		*str++ = b;
	}

	return (s);
}
