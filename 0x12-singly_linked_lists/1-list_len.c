#include "lists.h"

/**
 * list_len - Function that prints all the elements of a list_t list.
 *
 * @list: Given list_t list to be printed.
 *
 * Return: Number of nodes in list.
 */

size_t list_len(const list_t *list)
{
	if (!list)
		return (0);
	return (1 + list_len(list->next));
}
