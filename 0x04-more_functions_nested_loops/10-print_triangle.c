#include "main.h"

/**
 * print_triangle -print a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0(Success)
 */

void print_triangle(int size)
{
	int hight, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((high + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
