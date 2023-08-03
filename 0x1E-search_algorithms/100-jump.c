#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of
 *               integers using the Jump search algorithm.
 *
 * @array: Pointer to array of integers to be searched.
 * @size: Size of given array.
 * @value: Integer value to be searched for in given array.
 *
 * Return: First index where value is located on SUCCESS,
 *         -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);

	while (array[i] < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
