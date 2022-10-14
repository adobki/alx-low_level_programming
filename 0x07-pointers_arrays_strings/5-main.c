#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("_strstr: %s\n", t);

	t = strstr(s, f);
	printf(" strstr: %s\n", t);

	return (0);

}
