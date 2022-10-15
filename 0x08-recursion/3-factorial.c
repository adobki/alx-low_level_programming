#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 *
 * @n: Given number.
 *
 * Return: The factorial of given number.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
