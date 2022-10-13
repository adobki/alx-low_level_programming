#include "main.h"

/**
 * main - A program that calls other funtions.
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Look up! Don't be a shmuck about this!'\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
