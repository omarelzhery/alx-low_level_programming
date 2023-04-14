#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of size
 *
 * @min: aize of arry
 * @max: to assign
 * Description: create array of size
 * Return: pointer
 *
 */

int *array_range(int min, int max)
{

	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
