#include "main.h"

/**
* main - Program finds and prints the largest prime factor of 612852475143.
*
* Return: Always 0 (Sucess).
*/

int main(void)
{
	unsigned long long num = 612852475143, factor = 2;

	while (num / factor != 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			/* printf("%llu, ", factor); */
			factor = 2;
		}
		else
			factor++;
	}

	printf("%lu\n", num);

    return (0);
}
