#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size: unsigned int
 * @c: char
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
