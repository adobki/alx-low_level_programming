#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at given position in dlist list.
 *
 * @h: Pointer to a pointer to the head node of a dlistint_t list.
 * @idx: Index to insert the new node.
 * @n: Data to be stored in the new node.
 *
 * Return: Pointer to the new node of the list on success.
 *         NULL on error.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int countr = 0;
	dlistint_t *node = *h;

	if (*h)
		while (node->next != NULL)
		{
			if (countr == idx)
			{
				node = add_dnodeint(&node, n);
				return (node);
			}
			node = node->next, countr++;
		}

	return (NULL);
}
