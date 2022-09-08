#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare variable and assign output string to it */
	char myChar;
	int myInt;
	long myLong;
	double myDouble;
	float myFloat;

	/* Evaluate data types sizes with sizeof() and output to screen (stdout) */
	printf("Size of a char: %zu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(myLong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(myDouble));
	printf("Size of a float: %zu byte(s)\n", sizeof(myFloat));

	/* return 0 to end program */
	return (0);
}
