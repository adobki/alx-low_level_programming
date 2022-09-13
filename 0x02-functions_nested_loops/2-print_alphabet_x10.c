#include "main.h"

/**
 * print_alphabet_10x - Print a-z ten times, followed by a new line character.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_10x(void)
{
	/* Declare variables to store alpabets in lowercase and to count to ten */
	char alpha = 'a';
	int countr;

	/* For loop to run function ten times */
	for (countr = 0; countr < 10; countr++)
	{
		/* Count through a to z, output each letter with _putchar function */
		while (alpha <= 'z')
			_putchar(alpha++);

		/* Print a new line character after the alphabets */
		_putchar('\n');
	}
}
