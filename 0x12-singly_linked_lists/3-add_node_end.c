#include "lists.h"

/**
 * strLen - Function that counts the characters in a given string.
 *
 * @str: String to be counted.
 *
 * Return: Number of characters in given string.
 */

int strLen(char *str)
{
	if (!str || !*str)
		return (0);

	return (1 + strLen(++str));
}

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 *
 * @head: Pointer to a list_t list.
 * @str: String to be added to the new node in list.
 *
 * Return: Pointer to the new node in the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmpHead = *head;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = strLen(node->str);
	node->next = NULL;

	if (!tmpHead)
		*head = node;
	else
	{
		while (tmpHead->next)
			tmpHead = tmpHead->next;
		tmpHead->next = node;
	}

	return (node);
}
