#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the opcodes of its own main function.
 *
 * @argv: Array of parameters passed from the commandline.
 * @argc: Number of items in the array.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num;
	unsigned char *opcodes = NULL;

	if (argc != 2)
		printf("Error\n"), exit(1);
	num = atoi(argv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);

	opcodes = (unsigned char *)main;

	while (num)
		printf("%02x ", *opcodes--), num--;
	printf("\n");

	return (0);
}
