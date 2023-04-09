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
	int sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
