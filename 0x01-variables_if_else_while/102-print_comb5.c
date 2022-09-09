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
	int num4;

	/* Count through 0 to 9999 and output each number with a comma and spaces */
	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = 48; num3 < 58; num3++)
			{
				for (num4 = num3 + 1; num4 < 58; num4++)
				{
					if ((num1 + num2 + num3 + num4) <= (57 + 56 + 57 + 57))
					{
						putchar(num1);
						putchar(num2);
						putchar(32);
						putchar(num3);
						putchar(num4);

						/* Prevent trailing comma and space after last digit */
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	/* Add a new line character after the outputs */
	putchar(10);

	/* Return 0 to end program */
	return (0);
}
