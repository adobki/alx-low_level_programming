#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
	dlistint_t *head;
	dlistint_t *new_node;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (EXIT_FAILURE);
	}
	new_node->n = 9;
	head->prev = new;
	new_node->next = head;
	new_node->prev = NULL;
	head = new_node;
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);

	free(new_node);

	return (EXIT_SUCCESS);
}
