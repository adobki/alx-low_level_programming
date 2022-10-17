#include "main.h"

/**
 * countChange - Function that counts coins from given integer, change.
 *               Check main function below for full description.
 *               NOTE: Function assumes that change is an integer >= 1.
 *
 * @change: Given integer.
 *
 * Return: Minimum number of coins needed for change.
 */

int countChange(int change)
{
	if (change <= 1)
		return (change);
	else if (change)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
	}

	return (1 + countChange(change));
}

/**
 * _isInt - Function that checks if a given string contains only integers.
 *          NOTES: * It accepts negative integers so "-" is ignored.
 *                 * It assumes that given string is not empty.
 *
 * @c: String to be checked for symbols.
 *
 * Return: 1 on success,
 *        -1 on error/failure.
 */

int _isInt(char *c)
{
	while (*c)
	{
		if (!isdigit(*c))
			if (*c != '-')
				return (0);

		c++;
	}

	return (1);
}

/**
 * main - Program that prints the minimum number of coins to make change for
 *        an amount of money passed as a paramater from the commandline.
 *        Change is an unlimited number of coins of 25, 10, 5, 2, and 1.
 *        * If argc!=2, or passed parameter is not an integer (i.e. contains
 *          symbols, letters, etc.): print Error, new line, and return 1.
 *        * If number is less than 1: print 0, new line.
 *
 * @argc: Number of arguments passed to program from commandline.
 * @argv: Array of strings of passed arguments.
 *
 * Return: 0 on success,
 *         1 on error from invalid or no input(s)
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2 || !_isInt(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	else
		num = atoi(argv[1]);

	if (num < 1)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", countChange(num));

	return (0);
}
