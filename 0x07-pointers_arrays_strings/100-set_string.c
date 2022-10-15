#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to another pointer.
 *              This is done using a pointer to a pointer or double pointer.
 *
 * @s: Double pointer to be used
 * @to: String pointer to be pointed to>
 */

void set_string(char **s, char *to)
{
	*s = to;
}
