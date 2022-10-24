#include "main.h"

/**
 * strLen - Function that counts characters in a given string.
 *
 * @str: String to be counted.
 *
 * Return: Length of given string.
 */

unsigned int strLen(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * string_nconcat - Function that concatenates two strings. The new string
 *                  contains s1, followed by the first n bytes of s2.
 *                  NOTE: *If n >= lenght of s2, copy all of s2.
 *                        *NULL string is treated as an empty string.
 *
 * @s1: First string to be concatenated.
 * @s2: Second string to be concatenated.
 * @n: Number of characters to be copied from second string.
 *
 * Return: Pointer to a new, concatenated string.
 *         NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int length;
	unsigned int s1Len = 0;
	unsigned int s2Len = 0;

	if (s1 != NULL)
		s1Len = strLen(s1);
	if (s2 != NULL)
		s2Len = strLen(s2);

	if (s1Len + s2Len < 1)
		return (NULL);

	if (n < s2Len)
		s2Len = n;

	length = s1Len + s2Len;
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);

	if (s1Len)
		while (*s1)
			*str++ = *s1++;
	while (s2Len--)
		*str++ = *s2++;
	*str = '\0';
	str -= length;

	return (str);
}
