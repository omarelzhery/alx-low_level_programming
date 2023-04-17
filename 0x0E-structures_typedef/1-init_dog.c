#include "dog.h"
#include <stddef.h>
#include <string.h>
/**
 * init_dog - sdfsfd
 * @name :sdfs
 * @age :sdf
 * @owner :Sdf
 * @d :sdf
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
