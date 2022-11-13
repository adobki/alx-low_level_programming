#include "main.h"

/**
 * main - Program that prints the numbers from 1 to 100, but skips numbers
 *        that are multiples of 3 and 5. Intead of the number, it prints:
 *            i) Fizz for multiples of 3,
 *           ii) Buzz for multiples of 5, and
 *          iii) FizzBuzz for multiples of 3 and 5.
 *
 * Return: Always 0 (Sucess).
 */

int main(void)
{
	int num = 0;

	while (num++ < 100)
	{
		if (num % 3 == 0)
			printf("Fizz");
		if (num % 5 == 0)
			printf("Buzz");
		if (num % 3 != 0 && num % 5 != 0)
			printf("%d", num);

		if (num != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
