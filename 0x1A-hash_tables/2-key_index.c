#include "hash_tables.h"

/**
 * key_index - Generates an index from the hash of the given key.
 *
 * @key: Hash key passed as a string.
 * @size: Size of hash table (array).
 *
 * Return: Generated hash (int that is >= 0, < size).
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size < 1 || !key || !*key)
		return (0);

	return (hash_djb2(key) % size);
}
