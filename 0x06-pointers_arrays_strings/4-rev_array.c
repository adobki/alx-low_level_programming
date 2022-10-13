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

	/* Loop through a backwards and copy contents to aRev */
	while (countr > 0)
	{
		aRev[countr--] = *a++;
	}

	/* Loop through a & aRev backwards, copying reversed contents back to a */
	countr = n + 1;
	while (countr > 0)
	{
		*a-- = aRev[countr--];
	}
}
