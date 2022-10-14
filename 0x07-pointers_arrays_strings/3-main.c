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
	char *f = "ohel";
	unsigned int n;

	n = _strspn(s, f);
	printf("_strspn: %u\n", n);

	n = strspn(s, f);
	printf(" strspn: %u\n", n);
	return (0);

}
