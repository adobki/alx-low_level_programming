#include "3-calc.h"

/**
 * main - Program that performs simple operations.
 *
 * @argv: Array of parameters passed from the commandline.
 * @argc: Number of items in the array.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*calc)(int, int) = NULL;

	if (argc < 4)
		printf("Error\n"), exit(98);

	calc = get_op_func(argv[2]);
	if (argv[2][1] || !calc)
		printf("Error\n"), exit(99);

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
