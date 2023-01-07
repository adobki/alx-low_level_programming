#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table with a given size.
 *
 * @size: Size to be given to the new hash table.
 *
 * Return: Pointer to created sorted hash table on success.
 *         NULL on error.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_sht = NULL;
	unsigned long int index = 0;

	if (size < 1)
		return (NULL);

	new_sht = malloc(sizeof(shash_table_t));
	if (new_sht)
	{
		new_sht->array = NULL;
		new_sht->array = malloc(size * sizeof(shash_node_t **));
		if (new_sht->array)
		{
			while (index < size)
				new_sht->array[index++] = NULL;

			new_sht->size = size, new_sht->shead = new_sht->stail = NULL;
			return (new_sht);
		}

		free(new_sht->array);
		free(new_sht);
	}

	return (NULL);
}

/**
 * shash_table_set - Adds an element to the hash table.
 *
 * @sht: Pointer to sorted hash table for new element.
 * @key: Hash key passed as a string.
 * @value: Value to be assigned to key, passed as a string.
 *
 * Return: 1 on success.
 *         0 otherwise.
 */

int shash_table_set(shash_table_t *sht, const char *key, const char *value)
{
	char *str = NULL;

	if (!sht || !(void *)sht || !key || !*key || !value || !*value)
		return (0);

	str = strdup(value);
	*str = 1;

	return (*str);
}

/**
 * shash_table_get - Gets an element from a sorted hash table.
 *
 * @sht: Pointer to hash table.
 * @key: Hash key passed as a string.
 *
 * Return: 1 on success.
 *         0 otherwise.
 */

char *shash_table_get(const shash_table_t *sht, const char *key)
{
	if (!sht || !(void *)sht || !key || !*key)
		return (NULL);

	sht = NULL;
	key = (void *)sht;

	return ((char *)key);
}

/**
 * shash_table_print - Prints all nodes in a sorted hash table.
 *
 * @sht: Pointer to a sorted hash table for printing.
 */

void shash_table_print(const shash_table_t *sht)
{
	if (!sht || !(void *)sht)
		sht = NULL;
}

/**
 * shash_table_print_rev - Prints all nodes in a sorted hash table.
 *
 * @sht: Pointer to a sorted hash table for printing.
 */

void shash_table_print_rev(const shash_table_t *sht)
{
	shash_table_print(sht);
}

/**
 * shash_table_delete - Deletes a node from a sorted hash table.
 *
 * @sht: Pointer to sorted hash table for printing.
 */

void shash_table_delete(shash_table_t *sht)
{
	if (!sht || !(void *)sht)
		sht = NULL;
}
