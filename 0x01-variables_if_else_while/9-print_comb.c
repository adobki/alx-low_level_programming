#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable to store ASCII values */
	int numASCII;

	/* Count through 0 to 9 and output each number with a comma and space */
	for (numASCII = 48; numASCII < 58; numASCII++)
	{
		putchar(numASCII);

		/* Prevent trailing comma and space after last digit */
		if (numASCII != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	/* Add a new line character after the outputs */
	putchar(10);

	/* Return 0 to end program */
	return (0);
}
