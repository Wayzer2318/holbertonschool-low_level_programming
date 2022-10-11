#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string
 * @str: variable
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = 0; i < (len / 2); i++)
	{
		s[len] = s[i];
	}
}
