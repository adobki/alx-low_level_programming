#include "main.h"

/**
 * rmvBlanks - Function that removes all leading blanks (spaces and new line
 *             characters: ' ' and '\n') in a giving string.
 *
 * @str: String to be checked for blanks.
 *
 * Return: Pointer to given string without leading white spaces.
 */

char *rmvBlanks(char *str)
{
	if (*str == ' ' || *str == '\n' || *str == '\t')
		str = rmvBlanks(++str);

	return (str);
}

/**
 * wCount - Function that performs a counting operation on a given string
 *          based on selected mode.
 *          NOTE: Ignores all white spaces through rmvBlanks() function.
 *           * MODE = 0: Counts number of words in given string.
 *           * MODE = 1: Counts characters in first word of given string.
 *
 * @str: String for counting operation.
 * @mode: Mode specifier of function.
 *
 * Return: Number of words in string.
 */

int wCount(char *str, int mode)
{
	int countr = 0;

	str = rmvBlanks(str);

	/* Count words in given string */
	if (mode == 0)
	{
		while (*str)
		{
			if (*str++ == ' ' || *str == '\t' || *str == '\n')
			{
				countr++;
				str = rmvBlanks(str++);
			}
			else
				if (*str == '\0')
					countr++;
		}
	}

	/* Count characters in first word of string */
	if (mode == 1)
	{
		while (*str)
		{
			if (*str == '\n' || *str == ' ' || *str == '\t')
				break;
			countr++;
			str++;
		}
	}

	return (countr);
}

/**
 * strtow - Function that splits a string into words (arrays of words). Words
 *          are null-terminated and separated by spaces, and the last element
 *          of the returned array is NULL.
 *
 * @str: String to be split into words.
 *
 * Return: Pointer to an array of the words (strings) from given string.
 *         NULL if it fails, OR str == NULL or "".
 */

char **strtow(char *str)
{
	int wrdSize;
	int wrdCount;
	int wrd = 0;
	int countr = 0;
	char **words;

	if (str == NULL)
		return (NULL);
	str = rmvBlanks(str);
	if (*str == '\0')
		return (NULL);
	wrdCount = wCount(str, 0);

	words = malloc((wrdCount + 1) * sizeof(char *));

	while (wrd < wrdCount)
	{
		str = rmvBlanks(str);
		wrdSize = wCount(str, 1);
		words[wrd] = malloc((wrdSize + 1) * sizeof(char));
		while (wrdSize--)
			words[wrd][countr++] = *str++;
		words[wrd][countr++] = '\0';
		wrd++;
		countr = 0;
	}
	words[wrd] = NULL;

	return (words);
}
