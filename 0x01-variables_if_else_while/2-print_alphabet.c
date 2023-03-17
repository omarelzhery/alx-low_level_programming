#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: The main function generates a random
 * number and
 * computes the last digit to output the corresponding
 * string.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	return (0);
}
