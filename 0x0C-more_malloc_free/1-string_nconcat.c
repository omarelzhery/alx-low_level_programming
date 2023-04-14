#include "main.h"
#include <stdlib.h>
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
	unsigned int len1, len2;
	char *result, *p;

	len1 = 0;
	len2 = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s2[len2])
		len2++;

	result = malloc(len1 + n + 1);
	if (!result)
		return (NULL);

	p = result;

	while (*s1)
		*p++ = *s1++;

	while (*s2 && n-- > 0)
		*p++ = *s2++;

	*p = '\0';

	return (result);
}
