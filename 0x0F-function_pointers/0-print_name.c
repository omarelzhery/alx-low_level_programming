#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a pointer to a character array representing the name to be printed
 * @f: a pointer to a function that takes a character array and prints it
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Name: ");
	(*f)(name);
}
