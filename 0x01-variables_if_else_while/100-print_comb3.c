#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable to store ASCII values */
	int num1;
	int num2;

	/* Count through 0 to 99 and output each number with a comma and space */
	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);

			/* Prevent trailing comma and space after last digit */
			if (num1 < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	/* Add a new line character after the outputs */
	putchar(10);

	/* Return 0 to end program */
	return (0);
}
