#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'A', x <= 'Z', x++)

	putchar(tolower(x));
	putchar(x);
	putchar('\n');
	return (0);
}
