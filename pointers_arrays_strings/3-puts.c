#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: string
 * Return: print 0
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
