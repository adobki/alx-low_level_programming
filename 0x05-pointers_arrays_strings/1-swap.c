#include "main.h"
/**
 * swap_int - A function that swaps the values of two pointer variables.
 *
 * @a: Pointer variable used to reference original variable
 * @b: Pointer variable used to reference original variable
 *
 * Return: Nothing (void)
 */
void swap_int(int *a, int *b)
{
	/* Backup value of a in c before swap */
	int c = *a;

	/* Copy value of b to a */
	*a = *b;

	/* Copy original value of a to b from backup in c */
	*b = c;
}
