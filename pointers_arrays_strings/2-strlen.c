#include "main.h"
#include <stdio.h>

/**
 * _strlen - point to an int
 * @s: string
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;
	return (i);
}
