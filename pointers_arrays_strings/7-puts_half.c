#include <stdio.h>
#include "main.h"
/**
 * puts_half - function  that prints half  of a string
 * @str: variable
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 3) == 0)
		{
			putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	printf("\n");
}
