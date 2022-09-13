#include "main.h"

/**
 * print_alphabet - Print a to z in lowercase, followed by a new line character
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	/* Declare variable to store alpabets in lowercase */
	char alpha = 'a';

	/* Count through a to z and output each letter with _putchar function */
	while (alpha <= 'z')
		_putchar(alpha++);

	/* Print a new line character after the alphabets */
	_putchar('\n');
}
