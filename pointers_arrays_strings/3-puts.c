#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: string
 * Return: print the string
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (str[i]);
}
