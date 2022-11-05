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
 * append_text_to_file - Function that appends text at the end of a file.
 *                       Nothing happens if file doesn't exist.
 *                       If text_content==NULL, return 1 if file exists, -1
 *                       if not or don't have permissions to write to file.
 *
 * @filename: Name of file to append text to.
 * @text_content: String to written to the file.
 *
 * Return: 1 on success.
 *        -1 on failure, error, or filename==NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int FD, length = strLen(text_content);

	FD = open(filename, O_RDWR | O_APPEND);
	if (FD == -1)
		return (-1);

	length = write(FD, text_content, length);
	close(FD);
	if (length < 0)
		return (-1);

	return (1);
}
