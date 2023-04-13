#include <stdlib.h>
/**
 * malloc_checked - create array of size
 *
 * @b: aize of arry
 * char to assign
 * Description: create array of size
 * Return: pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
