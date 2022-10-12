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
	i--;

	x = i / 2;

	for (; x <= i; x++)
	{
		putchar(str[x]);
	}
	printf("\n");
}
