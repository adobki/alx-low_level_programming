#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci sequence <= 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, numbers;
	float fibSum;

	while (1)
	{
		numbers = num1 + num2;
		if (numbers > 4000000)
			break;

		if ((numbers % 2) == 0)
			tot_sum += numbers;

		num1 = num2;
		num2 = numbers;
	}
	printf("%.0f\n", fibSum);

	return (0);
}
