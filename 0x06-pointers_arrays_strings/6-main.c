#include "main.h"

/**
 * main - A program that calls other funtions.
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what\
	comes.\n hello world! hello-world 0123456hello world\thello world.hello\
	world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("ptr:\n%s\n", ptr);
	printf("str:\n%s", str);
	return (0);
}
