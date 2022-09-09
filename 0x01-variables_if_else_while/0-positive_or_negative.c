#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare variables */
	int n;

	/* Provided source code from task */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* check for value of n and print result */
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);

	/* return 0 to end program */
	return (0);
}
