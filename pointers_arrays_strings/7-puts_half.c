#include <stdio.h>
#include "main.h"
/**
 * puts_half - function  that prints half  of a string
 * @str: variable
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
		i++;
	}
	
	x = i / 2;

	if (i % 2 == 1)
		i++;
	while (x != '\0')
	{
		putchar(str[x]);
		x++;
	}
	printf("\n");
}
