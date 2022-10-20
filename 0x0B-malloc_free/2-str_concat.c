#include "main.h"

/**
 * _strLen - Counts characters in a given string.
 *
 * @str: Source string.
 *
 * Return: Number of characters in given string.
 */

int _strLen(char *str)
{
	int length = 0;

	if (str)
		while (str[length])
			length++;

	return (length);
}

/**
 * _strCpy - Function that copies a string.
 *           NOTE: Does no checks/validations.
 *
 * @src: String to be copied.
 * @str: Destination of copied string.
 *
 * Return: Pointer to the end of copied string.
 */

char *_strCpy(char *src, char *str)
{
	while (*src)
		*str++ = *src++;

	return (str);
}

/**
 * str_concat - Function that concatenates two strings. New string contains the
 *              contents of the first string, followed by the second one.
 *              NOTE: If NULL string is passed, treat it as an empty string.
 *
 * @s1: First string to be concatenated.
 * @s2: Second string to be concatenated.
 *
 * Return: Pointer to the concanated or an empty string.
 *         NULL on error or unable to allocate memory for new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int length;

	length = _strLen(s1) + _strLen(s2);
	str = malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);

	if (s1)
		str = _strCpy(s1, str);
	if (s2)
		str = _strCpy(s2, str);

	*str = '\0';
	str -= length;

	return (str);
}
