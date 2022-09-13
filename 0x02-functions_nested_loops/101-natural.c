#include <stdio.h>

/**
 * main - Lists natural numbers below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int countr, numbers = 0;

	for (countr = 0; countr < 1024; countr++)
	{
		if ((countr % 3) == 0 || (countr % 5) == 0)
			numbers += countr;
	}

	printf("%d\n", numbers);

	return (0);
}
