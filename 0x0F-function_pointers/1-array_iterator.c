#include "function_pointers.h"

/**
 * array_iterator - Function that executes a callback function
 *                  on each element in a given array.
 *
 * @array: Given array.
 * @size: Number of items in array.
 * @action: Pointer to a allback function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size >= 1)
		while (i < size)
			action(array[i++]);
}
