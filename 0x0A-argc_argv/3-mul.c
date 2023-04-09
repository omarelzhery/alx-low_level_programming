#include <stdio.h>
#include <stdlib.h>

/**
 * main - takesd
 *
 * Description: 'the program's description'
 *
 * @argc : 0sdfs
 * @argv : 4dsfsd
 *
 * Return: Always 0 (Success)
 **/
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
	}
	return (0);
}
