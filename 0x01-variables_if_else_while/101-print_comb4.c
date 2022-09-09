#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variables to store ASCII values */
	int num1;
	int num2;
	int num3;

	/* Count through 0 to 999 and output each number with a comma and space */
	for (num1 = 48; num1 < 56; num1++)
	{
		for (num2 = num1 + 1; num2 < 57; num2++)
		{
			for (num3 = num2 + 1; num3 < 58; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				/* Prevent trailing comma and space after last digit */
				if (num1 < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	/* Add a new line character after the outputs */
	putchar(10);

	/* Return 0 to end program */
	return (0);
}
