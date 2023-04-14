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
	unsigned int x, y, len1, len2;
	char *strin;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len2])
	{
		len2++;
	}
	strin = malloc(len1 + n + 1);
	if (strin ==  NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		strin[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		strin[x] = s2[y];
		y++;
	}
	strin[x] = '\0';

	return (strin);
}
