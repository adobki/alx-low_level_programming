#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 *
 * @head: Pointer to a pointer to a dlistint_t head node.
 * @num: Data to be stored in the new node.
 *
 * Return: Pointer to the created node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int num)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = num;
	new_node->next = *head;
	if (*head)
		new_node->prev = (*head)->prev;

	*head = new_node;

	return (new_node);
}
