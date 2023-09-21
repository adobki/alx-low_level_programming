#include "3-calc.h"

/**
 * get_op_func - Function that returns a calc operator function
 *			   based on the operator that is given as a string.
 *
 * @s: String representation of an operator.
 *
 * Return: Pointer to corresponding function if it exists,
 *		 NULL otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
		if (*ops[i++].op == *s)
			return (ops[--i].f);

	return (NULL);
}
