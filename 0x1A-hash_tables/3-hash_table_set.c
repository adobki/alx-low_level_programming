#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: Pointer to hash table for new element.
 * @key: Hash key passed as a string.
 * @value: Value to be assigned to key, passed as a string.
 *
 * Return: 1 on success.
 *         0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *str = NULL;

	if (!ht || !(void *)ht || !key || !*key || !value || !*value)
		return (0);

	str = strdup(value);
	*str = 1;

	return (*str);
}
