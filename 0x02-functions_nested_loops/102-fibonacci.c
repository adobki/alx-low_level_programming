#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long numbers;
	int countr;
	unsigned long num1 = 1;
	unsigned long num2 = 0;

	for (countr = 0; countr < 50; countr++)
	{
		numbers = num2 + num1;
		printf("%lu", numbers);

		num2 = num1;
		num1 = numbers;

		if (countr == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
