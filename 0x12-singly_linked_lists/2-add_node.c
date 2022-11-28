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
 * add_node - Function that adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to a list_t list.
 * @str: String to be added to the new node in list.
 *
 * Return: Pointer to the new head node of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	list = malloc(sizeof(list_t));
	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = strLen(list->str);
	if (*head)
		list->next = *head;
	else
		list->next = NULL;
	*head = list;

	return (list);
}
