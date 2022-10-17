#include "main.h"

/**
 * main - Program that prints all arguments it receives.
 *
 * @argc: Number of arguments passed to program from commandline.
 * @argv: Array of strings of passed arguments.
 *
 * Return: 0 (Always success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
