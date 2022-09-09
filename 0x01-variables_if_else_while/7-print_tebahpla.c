#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable to store ASCII value of alpabets in lowercase */
	int alphaASCII = 122;

	/* Count through a to z backwards and print each letter to stdout */
	while (alphaASCII > 96)
		putchar(alphaASCII--);

	/* Add a new line character after the alphabets */
		putchar(10);

	/* Return 0 to end program */
	return (0);
}
