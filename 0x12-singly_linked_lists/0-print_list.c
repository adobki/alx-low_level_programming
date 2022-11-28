#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 *
 * @element: Given list_t list to be printed.
 *
 * Return: Number of nodes in list.
 */

size_t print_list(const list_t *element)
{
	int length = 0;

	while (element)
	{
		if (element->str)
			printf("[%d] %s\n", element->len, element->str);
		else
			printf("[0] (nil)\n");
		length++, element = element->next;
	}

	return (length);
}
