#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 *
 * @s: String to be searched
 * @accept: Set of bytes to be searched for in s
 *
 * Return: Index of position prefix string ends in source string.
 */

char *_strpbrk(char *s, char *accept)
{
	char *src = s;
	char *src2 = accept;

	while (*src)
	{
		src2 = accept;
		while (*src2)
		{
			if (*src == *src2++)
				return (src);
		}

		src++;
	}

	return ('\0');
}

