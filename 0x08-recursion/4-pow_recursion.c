#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to the power
 *                  of y.
 *                  Note: If y is lower than 0, the function should return -1.
 *
 * @x: Given integer.
 * @y: Exponent/power to raise integer to.
 *
 * Return: Integer that corresponds to x^y.
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, --y));
	else
		return (-1);
}
