#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable to store ASCII value of numbers */
	int numASCII;

	/* Count through 0 to 9 and output each number to stdout */
	for (numASCII = 48; numASCII < 58; numASCII++)
		putchar(numASCII);

	/* Add a new line character after the output */
		putchar(10);

	/* Return 0 to end program */
	return (0);
}
