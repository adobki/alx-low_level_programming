#include "main.h"

/**
 * array_range - Function that creates an array of integers. The array contains
 *               a range of values from min to max, ordered from min to max.
 *
 * @min: Lowest value to fill new array with.
 * @max: Highest value to fill new array with.
 *
 * Return: Pointer to an array of a range of given numbers.
 *         NULL if it fails, or min > max.
 */

int *array_range(int min, int max)
{
	int *array;
	int length = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(min) * length);
	if (!array)
		return (NULL);

	while (length--)
		array[length] = max--;

	return (array);
}
