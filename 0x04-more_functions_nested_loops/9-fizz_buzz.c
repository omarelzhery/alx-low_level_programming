#include "main.h"

/**
 * main- A program that uses puts to print a string
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	return (0);
}
