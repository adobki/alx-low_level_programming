#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;
	/*char c;*/
	char c1[] = "Betty ";
	char c2[] = "Holberton";

	s = str_concat(c1, c2);
	/*
	s = str_concat(c, c2);
	s = str_concat(c, c);
	*/
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("[%s]\n", s);
	free(s);
	return (0);
}
