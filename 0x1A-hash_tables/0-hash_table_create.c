#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with a given size.
 *
 * @size: Size to be given to the new hash table.
 *
 * Return: Pointer to created hash table on success.
 *         NULL on error.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int index = 0;

	if (size < 1)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht)
	{
		new_ht->array = NULL;
		new_ht->array = malloc(size * sizeof(hash_node_t **));
		if (new_ht->array)
		{
			while (index < size)
				new_ht->array[index++] = NULL;

			new_ht->size = size;
			return (new_ht);
		}

		free(new_ht->array);
		free(new_ht);
	}

	return (NULL);
}
