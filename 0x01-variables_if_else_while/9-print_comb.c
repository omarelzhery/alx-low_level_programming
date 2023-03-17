#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all the numbers in base 16;
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	putchar(x + '0');
	if (x == 9)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
