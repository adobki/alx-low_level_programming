#include "main.h"

/**
 * main - Program that prints its name, followed by a new line.
 *
 * @argc: Number of arguments passed to program from commandline.
 * @argv: Array of strings of passed arguments.
 *
 * Return: 0 (Always success).
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
