#include "main.h"

/**
 * print_numbers - print 0123456789
 *
 * Return: void
 */

void print_numbers(void)
{
	char b;

	for (b = '0'; b < '10'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
