#include "3-calc.h"

#include "3-op_functions.c"
#include "3-get_op_func.c"

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
	if (calc)
		printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
