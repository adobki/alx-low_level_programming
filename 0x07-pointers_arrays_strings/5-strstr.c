#include "main.h"

/**
 * _strstr - Function that searches a string for first occurence of substring.
 *
 * @haystack: String to be searched
 * @needle: Substring to be searched for in s
 *
 * Return: Pointer to position of substring in source string.
 */

char *_strstr(char *haystack, char *needle)
{
	int found;
	int length;
	char *src = haystack;
	char *src2 = needle;

	while (*src)
	{
		found = 1;
		length = 0;
		src2 = needle;
		while (*src2)
		{
			if (*src++ != *src2++)
			{
				found -= 1;
				break;
			}
			length++;
		}
		if (found == 1)
		{
			src -= length;
			return (src);
		}
	}

	return ('\0');
}
