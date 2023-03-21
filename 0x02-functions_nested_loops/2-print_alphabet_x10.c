#include "main.h"

/**
 * print_alphabet_x10 - Entry point ,this prints alphabet
 * in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	
	int s = 1;
	char alpha;


	while (s++ <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		_putchar('/n');
		}
	}
}
