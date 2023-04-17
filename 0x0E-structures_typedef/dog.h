#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog's properties
 * @name: pointer to a char array for the dog's name
 * @age: the age of the dog
 * @owner: pointer to a char array for the owner's name
 *
 * Description: defines a dog's properties using a struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
