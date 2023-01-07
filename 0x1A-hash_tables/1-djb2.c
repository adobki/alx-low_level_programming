#include "hash_tables.h"

/**
 * hash_djb2 - ALX SE's implementation of the djb2 algorithm.
 *
 * @str: String used to generate hash value.
 *
 * Return: Hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}

/**
 * hash_function - Generates a hash for the given key.
 *
 * @key: Hash key passed as a string.
 *
 * Return: Generated hash (int that is >= 0, < CAPACITY).
 */

int hash_function(char *key)
{
	int hash = 0, index = strlen(key);

	while (index--)
		hash += key[index] * (index + 1);

	return (hash % CAPACITY);
}
