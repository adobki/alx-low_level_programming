#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: Pointer to the head node of a dlistint_t list.
 * @index: Data to be stored in the new node.
 *
 * Return: Pointer to the nth node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int countr = 0;
	dlistint_t *node = head;

	if (head)
		while (node->next != NULL)
		{
			if (countr == index)
				return (node);
			node = node->next, countr++;
		}

	return (NULL);
}
