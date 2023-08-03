#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to array of integers to be searched.
 * @value: Integer value to be searched for in given array.
 *
 * Return: Pointer to first node where value is located,
 *         NULL otherwise.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t skip_idx;

	if (!list)
		return (NULL);

	while (list->express && list->express->n < value)
	{
		skip_idx = list->index;
		list = list->express;
		printf("Value checked at index [%d] = [%d]\n",
				(int)list->index, list->n);
	}

	printf("Value found between indexes %d and %d\n",
			(int)skip_idx, (int)list->index);

	while (list->next && list->n < value)
	{
		printf("[%d]\n", (int)list->index);
		list = list->next;
	}

	if (list->n == value)
	{
		/*printf("\n>IT IS!<\n");*/
		return (list);
	}
	else
	{
		/*printf("\n>IT ISN'T'!<\n");*/
		return (NULL);
	}

	/*	printf("Value checked array[%ld] = [%d]\n", i, array[i]);*/
	/*	if (array[i] == value)*/
	/*		return (i);*/
	/*}*/

	return (NULL);
}
