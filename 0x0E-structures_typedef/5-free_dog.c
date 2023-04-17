#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure and its members
 * @d: Pointer to dog structure to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
