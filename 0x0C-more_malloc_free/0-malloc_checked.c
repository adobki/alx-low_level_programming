#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc. If it fails,
 *                  function should cause normal process termination with a
 *                  status value of 98.
 *
 * @b: Size/amount of memory to allocate in bytes.
 *
 * Return: Pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *checker = malloc(b);

	if (checker == NULL)
		exit(98);

	return (checker);
}
