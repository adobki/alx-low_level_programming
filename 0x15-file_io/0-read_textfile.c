#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to stdout.
 *
 * @filename: Text file to be printed.
 * @letters: Number of letters it should read and print.
 *
 * Return: Number of characters read/printed by function on success.
 *         0 on error, filename==NULL, or prints < letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int FD;
	ssize_t length;

	FD = open(filename, O_RDONLY);
	if (FD == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	length = read(FD, buffer, letters);
	close(FD);
	if (length >= 1)
		length = write(STDOUT_FILENO, buffer, length);
	else
		length = 0;

	free(buffer);

	return (length);
}
