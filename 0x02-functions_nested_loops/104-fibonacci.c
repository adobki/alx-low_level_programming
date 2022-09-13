#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long numbers;
	int countr;
	unsigned long num1 = 1;
	unsigned long num2 = 0;
	unsigned long num3;
	unsigned long num4;
	unsigned long num5;
	unsigned long num6;
	unsigned long num7;
	unsigned long num8;

	for (countr = 0; countr < 92; countr++)
	{
		numbers = num2 + num1;
		printf("%lu, ", numbers);

		num2 = num1;
		num1 = numbers;
	}

	num3 = num2 / 10000000000;
	num5 = num1 / 10000000000;
	num4 = num2 % 10000000000;
	num6 = num1 % 10000000000;

	for (countr = 93; countr < 99; countr++)
	{
		num7 = num3 + num5;
		num8 = num4 + num6;
		if (num4 + num6 > 9999999999)
		{
			num7 += 1;
			num8 %= 10000000000;
		}

		printf("%lu%lu", num7, num8);
		if (countr != 98)
			printf(", ");

		num3 = num5;
		num4 = num6;
		num5 = num7;
		num6 = num8;
	}
	printf("\n");
	return (0);
}
