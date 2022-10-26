#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str: unsigned int
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return ('\0');

	while (str[i] != '\0')
		i++;
	i++;

	dup = malloc(i * sizeof(*dup));

	if (dup == NULL)
		return ('\0');

	while (j < i)
	{
		str[j] = str[i];
		j++;
	}
	return (dup);
	free(dup);
}
