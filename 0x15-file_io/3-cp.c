#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * err - Function that handles errors. It prints a message to stderr then
 *       exits program with an error code based on error thrown in parent
 *       function. See chart below for details:
 *       ERROR CODES: 97 on invalid arguments/parameters passed,
 *                    98 on can't read source file error,
 *                    99 on can't create/write to destination file error,
 *                   100 on can't close file descriptor error.
 *
 * @errID: Error thrown in parent function.
 * @issue: What threw/caused the error.
 */

void err(int errID, char *issue)
{
	if (errID == 97)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	else if (errID == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", issue);
		exit(98);
	}

	else if (errID == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", issue);
		exit(99);
	}

	else if (errID == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", issue);
		exit(100);
	}

}

/**
 * main - Program that copies the contents of one file to another file.
 *        Reads 1,024 bytes at a time from source file using a buffer.
 *        Replaces (truncates) the destination file if it exists, else
 *        set permissions to: rw-rw-r--.
 *
 * @ac: Number of arguments passed from CL.
 * @av: Vector of the passed arguments.
 *
 * Return:  0 on success,
 *         97 on invalid arguments/parameters passed,
 *         98 on can't read source file error,
 *         99 on can't create/write to destination file error,
 *        100 on can't close file descriptor error.
 */

int main(int ac, char **av)
{
	int FD1, FD2, closeFile, writeFile, readFile = 1;
	char buffer[1024] = {0}, FD[2] = {0};

	if (ac != 3)
		err(97, NULL);

	FD1 = open(av[1], O_RDONLY);
	if (FD1 == -1)
		err(98, av[1]);

	FD2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (FD2 == -1)
		err(99, av[2]);

	while (readFile > 0)
	{
		readFile = read(FD1, buffer, 1024);
		if (readFile == -1)
			err(98, av[1]);

		writeFile = write(FD2, buffer, readFile);
		if (writeFile == -1)
			err(99, av[2]);
	}

	closeFile = close(FD1);
	if (closeFile == -1)
		FD[0] = FD1 + 48, err(100, FD);

	closeFile = close(FD2);
	if (closeFile == -1)
		FD[0] = FD2 + 48, err(100, FD);

	return (0);
}
