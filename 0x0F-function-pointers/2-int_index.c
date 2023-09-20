#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer using a
 *             callback function as the comparison logic.
 *
 * @array: Given array.
 * @size: Number of items in array.
 * @cmp: Pointer to a allback function.
 *
 * Return: Index of found integer on SUCCESS,
 *         -1 on ERROR.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
		if (cmp(array[i++]) != 0)
			return ((int) --i);

	return (-1);
}
