#include "function_pointers.h"
/**
 * array_iterator - executes a given function on each element of an array
 * @array: pointer to the first element of an array of integers
 * @size: number of elements in the array
 * @action: pointer to a function that takes an integer as input and returns void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
