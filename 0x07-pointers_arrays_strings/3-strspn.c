#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: String to be searched
 * @accept: Prefix string which must be present in s
 *
 * Return: Index of position prefix string ends in source string.
 */

unsigned int _strspn(char *s, char *accept)
{
	int found;
	int countr = 0;
	char *src = s;
	char *src2 = accept;

	while (*src)
	{
		src2 = accept;
		while (*src2)
		{
			if (*src == *src2++)
			{
				found = 1;
				break;
			}
		}

		if (found != 1)
			break;

		found -= 1;
		src++;
		countr++;
	}

	return (countr);
}
