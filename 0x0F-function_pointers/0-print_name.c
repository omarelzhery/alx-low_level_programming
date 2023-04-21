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

/**
 * print_string - prints a string
 * @str: a pointer to a character array representing the string to be printed
 */
void print_string(char *str)
{
	printf("%s", str);
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char name[] = "John Smith";
	
	print_name(name, print_string);
	return (0);
}
