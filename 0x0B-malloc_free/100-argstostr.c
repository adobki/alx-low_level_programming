#include "main.h"

/**
 * strLen - Function that counts number of characters in a given string.
 *          NOTES: Adds a padding of one if string is not empty.
 *
 * @str: String to be counted.
 *
 * Return: Number of characters in given string.
 */

int strLen(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	if (length)
		length++;

	return (length);
}

/**
 * argstostr - Function that concatenates all the arguments of the program.
 *             Returns a pointer to a new string, or NULL if it fails. Each
 *             argument is followed by a '\n' in the new string.
 *
 * @ac: Number of arguments to be concatenated.
 * @av: Vector (array) of the arguments.
 *
 * Return: Pointer to a string of concatenated arguments on success.
 *         NULL if it fails, ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	char *avStr;
	int length = 0;
	int countr = 0;

	if (ac <= 0 || !*av)
		return (NULL);

	while (countr < ac)
		length += strLen(av[countr++]);

	str = malloc(++length * sizeof(char));
	if (!str)
		return (NULL);

	for (countr = 0; countr < ac; countr++)
	{
		avStr = av[countr];
		while (*avStr)
			*str++ = *avStr++;
		if (strLen(av[countr]))
			*str++ = '\n';
	}
	*str = '\0';
	str -= length - 1;

	return (str);
}
