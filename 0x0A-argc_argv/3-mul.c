#include "main.h"

/**
 * main - Program that multiplies two numbers passed from commandline.
 *        NOTE: Assume that the two numbers and result are all integers.
 *
 * @argc: Number of arguments passed to program from commandline.
 * @argv: Array of strings of passed arguments.
 *
 * Return: 0 on success,
 *         1 on error from invalid number of inputs.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
