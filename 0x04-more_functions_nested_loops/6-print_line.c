#include "main.h"

/**
 * print_line - check the code
 * @n :hgj0
 * Return: Always 0.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar ('_');
		n--;
	}
	if (n == 0)
	{
		_putchar ("\n");
	}
}
