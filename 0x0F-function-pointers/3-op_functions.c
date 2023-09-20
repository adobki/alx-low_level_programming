#include "3-calc.h"

/**
 * op_add - Function that adds two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that substracts one integer from another.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two integers.
 *          Prints "Error" and exits if denominator = 0.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of the multiplication.
 */
int op_div(int a, int b)
{
	if (!b)
		printf("Error\n"), exit(100);

	return (a / b);
}

/**
 * op_mod - Function returns the remainder of the division of two integers.
 *          Prints "Error" and exits if denominator = 0.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Result of the multiplication.
 */
int op_mod(int a, int b)
{
	if (!b)
		printf("Error\n"), exit(100);

	return (a % b);
}
