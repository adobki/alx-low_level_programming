#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable and assign output string to it */
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/* Output string to screen (stderr) */
	fwrite(str1, 59, 1, stderr);

	/* Return 1 to end program */
	return (1);
}
