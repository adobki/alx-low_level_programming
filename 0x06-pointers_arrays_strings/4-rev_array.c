#include "main.h"

/**
 * reverse_array - Function that reverses the contents of an array of integers.
 *
 * @a: Array of integers to be reversed.
 * @n: Number of elements in array.
 */

void reverse_array(int *a, int n)
{
	/* Create array to store contents of a in reverse order */
	int aRev[999];
	int countr = n;

	if (n < 2)
		return;

	/* Loop through a and copy contents to aRev backwards */
	while (countr)
	{
		aRev[countr--] = *a++;
	}

	/* Loop through a & aRev backwards, copying reversed contents back to a */
	countr = n;
	while (countr)
	{
		*--a = aRev[countr--];
	}
}
