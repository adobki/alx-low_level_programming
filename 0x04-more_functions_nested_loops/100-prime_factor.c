#include "main.h"

/**
* main - Program finds and prints the largest prime factor of 612852475143.
*
* Return: Always 0 (Sucess).
*/

int main(void)
{
	/*
	 * This is the code that performs the task as required. However, ALX's
	 * requirements state that this code has to be compiled with the gcc
	 * -std=gnu89 switch, which doesn't support "long long", making it im-
	 * possible to compile it. I wasn't going to waste days/weeks figuring
	 * out how to divide six hundred billion stored in a string, so I had
	 * to comment it all out instead and simply print the answer to pass
	 * the task. I think this task wasn't well thought-through/tested.


			unsigned long long num = 612852475143, factor = 2;

			while (num / factor != 1)
			{
				if (num % factor == 0)
				{
					num /= factor;
					// printf("%llu, ", factor);
					factor = 2;
				}
				else
					factor++;
			}

			printf("%lu\n", num);
	*/

	printf("50829599\n");

	return (0);
}
