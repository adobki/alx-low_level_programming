#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 *            It allocates memomry of new_size, then copies the old data from
 *            ptr to the new location, without initialising the extra blocks.
 *            NOTES: * If new_size == old_size, return ptr.
 *                   * If ptr == NULL, call is equivalent to malloc(new_size).
 *                   * If new_size == 0 && ptr != NULL, call is equivalent to
 *                     free(ptr). Return NULL.
 *                   * free(ptr) on certain errors.
 *
 * @ptr: Given pointer. Previously created using malloc(old_size).
 * @old_size: Size (in bytes) of the allocated space for ptr.
 * @new_size: Size (in bytes) of the requested memory block.
 *
 * Return: Pointer to the reallocated memory block.
 *         NULL if it fails, or min > max.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);
	if (!ptr)
		return (NULL);

	return (ptr);
}
