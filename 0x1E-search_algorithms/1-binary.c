#include "search_algos.h"

/**
 * print_array - Prints all the values in an array of integers.
 *
 * @array: Pointer to sorted array of integers to be searched.
 * @size: Size of given array.
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (!array || size <= 0)
		return;

	printf("Searching in array: %d", array[i++]);

	while (i < size)
		printf(", %d", array[i++]);

	printf("\n");
}

/**
 * binary_search - Searches for a value in an array of integers
 *                 using the binary search algorithm.
 *                 ASSUMPTIONS:
 *                   i. array is sorted in ascending order.
 *                  ii. value appears only once in array.
 *
 * @array: Pointer to sorted array of integers to be searched.
 * @size: Size of given array.
 * @value: Integer value to be searched for in given array.
 *
 * Return: First index where value is located,
 *         -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (!array || size <= 0)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;

		print_array(&array[left], right - left + 1);
		if (array[middle] < value)
			left = ++middle;
		else if (array[middle] > value)
			right = --middle;
		else
			return (array[middle]);
	}

	return (-1);
}
