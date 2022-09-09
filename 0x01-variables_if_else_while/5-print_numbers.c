#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable to store and count numbers */
	int num;

	/* Count through 0 to 9 and output each number to stdout */
	for (num = 0; num < 10; num++)
		printf("%d", num);

	/* Add a new line character after the output */
		putchar(10);

	/* Return 0 to end program */
	return (0);
}
