#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

void printResults(int month, int day, int year)
{
	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);
}

/**
* main - Sets the date and calls the printResults function
* Return: 0
*/

int main(void)
{
	int month, day, year;

	month = 4, day = 1, year = 1997;
	printResults(month, day, year);

	printf("\n");
	month = 2, day = 29, year = 2000;
	printResults(month, day, year);

	printf("\n");
	month = 2, day = 29, year = 1700;
	printResults(month, day, year);

	return (0);
}