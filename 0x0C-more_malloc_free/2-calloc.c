#include "main.h"
/**
 * _calloc - create array of size
 *
 * @size: aize of arry
 * @nmemb: to assign
 * Description: create array of size
 * Return: pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
	return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
