#include "main.h"

/**
 * print_diagonal - check the code
 * @n :dfdg
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int ln, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			for (space = 1; space <= ln; space++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
