#include "main.h"

/**
 * print_square - check the code
 *
 * @size :sdfs
 * Return: Always 0.
 */

void print_square(int size)
{

	int row, column;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; colum <= size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
