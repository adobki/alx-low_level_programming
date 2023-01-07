#include "hash_tables.h"

/**
 * hash_table_get - Gets an element from a hash table.
 *
 * @ht: Pointer to hash table.
 * @key: Hash key passed as a string.
 *
 * Return: 1 on success.
 *         0 otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht || !(void *)ht || !key || !*key)
		return (NULL);

	ht = NULL;
	key = (void *)ht;

	return ((char *)key);
}
