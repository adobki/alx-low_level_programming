#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a doubly linked list.
 *
 * @head: Pointer to the head node of a dlistint_t list.
 * @index: Node to be deleted from the list.
 *
 * Return: 1 on success.
 *        -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int countr = 0;
	dlistint_t *node = *head;

	if (*head)
		while (node->next != NULL)
		{
			if (countr == index)
			{
				if (node->prev)
					node->prev->next = node->next;
				if (node->next)
					node->next->prev = node->prev;
				if (countr == 0)
				{
					if (node->next)
						*head = node->next;
					else
						free_dlistint(*head), *head = NULL;
				}
				free(node);
				return (1);
			}
			node = node->next, countr++;
		}

	return (-1);
}
