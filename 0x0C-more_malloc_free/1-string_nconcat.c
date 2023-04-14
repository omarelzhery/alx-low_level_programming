#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - create array of size
 *
 * @s1: aize of arry
 * @s2: sdfs
 * @n: df
 * char to assign
 * Description: create array of size
 * Return: pointer
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1, len2;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
