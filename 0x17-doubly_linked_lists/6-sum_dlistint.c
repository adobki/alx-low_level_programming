#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list.
 *
 * @head: Pointer to the head node of a dlistint_t list.
 *
 * Return: Sum of data (n) across all nodes in given list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
		sum += head->n, head = head->next;

	return (sum);
}
