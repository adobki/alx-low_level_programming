#include "lists.h"

/**
 * free_list - Function that frees a malloc'd list_t list.
 *
 * @head: Pointer to a list_t list to be freed from memory.
 */

void free_list(list_t *head)
{
/*
	list_t **tmpHead = NULL, **tmpNext = NULL;

	*tmpHead = head;
	while (*tmpHead)
		*tmpNext = (*tmpHead)->next, free(*tmpHead), *tmpHead = *tmpNext;
	free(*tmpNext);
*/


	list_t **list = NULL, *tmpHead = head;
	unsigned length = 0, countr = 0;

	if (!head)
		return;

	while (tmpHead)
		length++, tmpHead = tmpHead->next;

	list = malloc(length * sizeof(list_t *));
	if (!list)
		return;
printf(" . . . . . . . . . . . \n");
	tmpHead = head;
	while (countr < length)
		list[countr++] = tmpHead, tmpHead = tmpHead->next, printf("[%p] = [%p]\n", list[countr - 1], tmpHead);

printf(" . . . . . . . . . . . \n");
printf(" . . . . . . . . . . . \n");
	while (length--)
		free(list[length]), printf("[%p] = [%p]\n", list[length], list[length + 1]);
	free(list), free(tmpHead);

printf(" . . . . . . . . . . . \n");
printf("\n\n	%d", length);

/*
	list_t *tmpHead = head;

	while (head)
		tmpHead = head->next, free(head), head = tmpHead;
	free(tmpHead);
*/
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmpHead = *head;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = 108 - *str;
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

printf("\nPrinted [%d] elements.\n", length);
printf(" - - - - - - - - - - - - - - -\n");
	return (length);
}

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
printf("\n\n");
print_list(head);
	head = NULL;

	return (0);
}
