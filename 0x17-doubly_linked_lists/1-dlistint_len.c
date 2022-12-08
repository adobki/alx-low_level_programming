#include "lists.h"

/**
 * dlistint_len - Counts number of elements in a dlistint_t list.
 *
 * @head: Given dlistint_t list to be counted.
 *
 * Return: Number of elements/nodes in list.
 */

size_t dlistint_len(const dlistint_t *head)
{
	size_t countr = 0;

	while (head)
		countr++, head = head->next;

	return (countr);
}
