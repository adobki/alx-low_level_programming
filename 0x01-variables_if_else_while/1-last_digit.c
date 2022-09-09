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
	int nLast;

	/* Provided source code from task */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Get and store last digit of n */
	nLast = (n % 10);

	/* Check for value of n and print result */
	if (nLast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nLast);
	else
		if (nLast == 0)
			printf("Last digit of %d is %d and is 0\n", n, nLast);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nLast);

	/* return 0 to end program */
	return (0);
}
