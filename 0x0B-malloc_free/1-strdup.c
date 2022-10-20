#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter.
 *
 * @str: String to be duplicated.
 *
 * Return: Pointer to a duplicate of the given string.
 *         NULL on error or empty source string.
 */

char *_strdup(char *str)
{
	int countr = 0;
	int length = 1;
	char *str2;

	if (!str)
		return (NULL);

	while (*str++)
		length++;

	str2 = malloc(length * sizeof(*str));
	if (!str2)
		return (NULL);

	if (length > 1)
	{
		str -= length;
		while (*str)
			str2[countr++] = *str++;
	}

	str2[countr] = '\0';
	return (str2);
}
