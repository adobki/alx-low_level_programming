#include "function_pointers.h"

/**
 * print_name - Function that prints a name using a callback function.
 *
 * @name: Pointer to a string (char array).
 * @f: Pointer to a callback function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
