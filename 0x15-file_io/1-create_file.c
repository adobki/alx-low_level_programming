#include "main.h"

/**
 * strLen - Function that counts number of characters in a string
 *
 * @str: Given string.
 *
 * Return: Number of characters found in given string, str.
 */

int strLen(char *str)
{
	int length = 0;

	if (str)
		while (*str)
			length++, str++;

	return (length);
}

/**
 * create_file - Function that creates a file and adds some text to it.
 *               File is truncated if it already exists. Empty file is
 *               created if no text content is supplied. File permission
 *               set to rw------- if file doesn't exist.
 *
 * @filename: Name of file to create.
 * @text_content: String to written to the file.
 *
 * Return: 1 on success.
 *        -1 on failure, error, or filename==NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int FD, length = strLen(text_content);

	FD = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (FD == -1)
		return (-1);

	if (length)
	{
		length = write(FD, text_content, length);
		close(FD);
		if (length < 1)
			return (-1);
	}
	else
		close(FD);

	return (1);
}
