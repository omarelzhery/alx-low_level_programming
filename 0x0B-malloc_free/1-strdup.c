#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - create array of size
 * @str: sdfsklj
 * Description: create array of size
 * Return: pointer
 *
 */

char *_strdup(char *str)
{
	int len;
	char *arr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
		return (NULL);
	while (len--)
		arr[len] = str[len];
	return (arr);
}
