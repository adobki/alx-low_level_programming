#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable to store ASCII value of alpabets in lowercase */
	int alphaASCII = 97;

	/* Count through a to z and output each letter to stdout */
	while (alphaASCII < 123)
	{
		/* Only output alphabet if it is not 'q' or 'e'. Move to next if it is */
		if (alphaASCII == 113)
			alphaASCII++;
		if (alphaASCII == 101)
			alphaASCII++;
		putchar(alphaASCII++);
	}

	/* Add a new line character after the alphabets */
		putchar(10);

	/* Return 0 to end program */
	return (0);
}
