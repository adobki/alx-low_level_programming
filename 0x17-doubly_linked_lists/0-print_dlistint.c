#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @head: Given dlistint_t list to be printed.
 *
 * Return: Number of nodes in list.
 */

size_t print_dlistint(const dlistint_t *head)
{
	size_t countr = 0;

	while (head)
	{
		printf("%d\n", head->n);
		countr++, head = head->next;
	}

	return (countr);
}
