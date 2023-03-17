#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Generate a random number and determine if it
 * is positive, negative, or zero
 *
 * This function generates a random number using the
 * rand() function seeded with the current time.
 * It then checks whether the number is positive,
 * negative, or zero, and outputs the corresponding
 * string value to the console.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
