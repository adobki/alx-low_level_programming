#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers, then new line.
 *
 * @a: An array of integers.
 * @n: Number of elements to be printed from the array.
 */
void print_array(int *a, int n)
{
	int countr = 0;

	/* Print n elements from array a, then comma and space */
	while (countr < (n - 1))
		printf("%d, ", a[countr++]);

	/* Print nth element from array a, then new line character */
	printf("%d\n", a[n - 1]);
}
