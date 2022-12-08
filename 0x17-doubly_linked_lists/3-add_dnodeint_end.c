#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list.
 *
 * @head: Pointer to a pointer to a dlistint_t head node.
 * @num: Data to be stored in the new node.
 *
 * Return: Pointer to the created node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *new_node, *tmp_head = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = num;
	new_node->next = NULL;

	if (*head == NULL)
		new_node->prev = NULL, *head = new_node;
	else
	{
		while (tmp_head->next != NULL)
			tmp_head = tmp_head->next;
		tmp_head->next = new_node, new_node->prev = tmp_head;
	}

	return (new_node);
}
